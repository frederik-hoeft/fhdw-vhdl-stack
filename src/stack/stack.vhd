library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

-- 256x8 Bit Stack
entity stack is port( 
    -- the peek port is a legacy pin and was at some point optimized out of the design.
    -- now it only exists for backwards compatibility purposes with the test bench. 
    -- FYI: peek is now the default operation when push = clear = 0 (also: pop implies peek).
    -- as of now the peek pin is not connected to anything, but we allow for the possibility of
    -- using it for something else in the future :)
    -- (yes there are warning because of it, but we don't want to rewrite the whole test bench again)
    -- (also if we were to change the implementation of the stack again and need to re-introduce
    -- the peek pin, we already have a test bench that tests it)
    -- (also also, maybe there are other stack implementations out there that do have a peek pin, so 
    -- we obviously planned for our stack to be a drop-in replacement for those, right?)
    -- (what I'm trying to say is that we're not lazy, we're just future-proofing our design)
    -- :)
    clk, push, pop, clear, peek : in std_logic;
    din : in std_logic_vector(7 downto 0);
    dout : out std_logic_vector(7 downto 0);
    full, empty : out std_logic);
end stack;

architecture stack_arch of stack is
    -- 512x8 bit single point Block SelectRAM
    component RAMB4_S8 port(
        we : in std_logic; -- Write: Enable: write di to RAM
        en : in std_logic; -- Enable: enable RAM
        rst : in std_logic; -- Reset: set do to 0
        clk : in std_logic; -- Clock: clock input, rising edge
        addr : in std_logic_vector(8 downto 0); -- Address Bus
        di : in std_logic_vector(7 downto 0); -- Data Input Bus
        do : out std_logic_vector(7 downto 0)); -- Data Output Bus
    end component;

    -- 9 bit Address Bus for RAM
    signal addr : std_logic_vector(8 downto 0);

    -- sanitized input signals (validity in current state)
    signal push_en, pop_en : std_logic;

    -- internal flags (status bits)
    -- these flags are directly derived from the stack pointer. 
    -- the synthesis tool is smart enough to optimize them out into asynchronous
    -- logic, which is exactly what we want.
    -- introducing a "real" state machine for this would definitely result in additional
    -- flip-flops, which would be wasteful.
    signal full_flag : std_logic := '0';
    signal empty_flag : std_logic := '1';

    -- 9 bit stack pointer (0 to 256) pointing to the next free address.
    -- we use 9 bits to avoid overflow when incrementing the stack pointer.
    -- at the same time we can use the MSB as a full flag, simplifying the 
    -- logic required to detect a full stack.
    -- this is the true state of the stack, the flags are just representations.
    signal stack_pointer : integer range 0 to 256 := 0;
begin
    -- instantiate RAM
    RAMB4_S8_inst : RAMB4_S8 port map(
        we => push_en,
        en => '1',
        rst => '0',
        clk => clk,
        addr => addr,
        di => din,
        do => dout);

    -- sanitize input signals asynchronously
    -- we require a small additional setup time to take into account the
    -- propagation delay of this logic and our address mux.
    push_en <= push and not full_flag;
    pop_en <= pop and not empty_flag;
    
    -- "state machine" transitions (synchronous stack pointer manipulation)
    -- signals are processed on rising edge of clock in the following order:
    -- 1. clear: reset stack pointer to 0
    -- 2. push: increment stack pointer
    -- 3. pop: decrement stack pointer and read from stack pointer - 1
    -- 3. peek: read from stack pointer - 1 (parallel to pop)
    -- **NOTE**: the order of these signals is important, and must conform to
    --           the order of evaluation in the address mux below, such that
    --           the RAM address is always valid.
    --
    -- **NOTE**: attempts to over or underflow the stack will be ignored.
    --           it's the user's responsibility to check the full/empty flags
    --           before pushing/popping/peeking.
    transition: process(clk)
    begin
        if (rising_edge(clk)) then
            if (clear = '1') then
                stack_pointer <= 0;
            elsif (push_en = '1') then
                stack_pointer <= stack_pointer + 1;
            elsif (pop_en = '1') then
                stack_pointer <= stack_pointer - 1;
            end if;
        end if;
    end process transition;

    -- "state machine" state refresh (asynchronous status flag update)
    -- there isn't really a clear boundary between this and the transition
    -- process above, as the stack pointer is the only thing that is *actually*
    -- persisted, but these flags are *treated* like the state of the stack.
    -- It's really just a matter of terminology.
    -- these flags are really just representations of the stack pointer,
    -- so we update them here. there are no registers associated with the flags,
    -- so they are updated asynchronously (i.e. as soon as the stack pointer changes
    -- for whatever reason).
    state: process(stack_pointer)
    begin
        -- empty flag is basically just a 9 bit NOR of the stack pointer (== 0)
        if (stack_pointer = 0) then
            empty_flag <= '1';
        else
            empty_flag <= '0';
        end if;
        -- full flag is MSB of stack pointer
        full_flag <= std_logic(to_unsigned(stack_pointer, addr'length)(addr'length - 1));
        -- obviously this way of doing things ensures that empty_flag and
        -- full_flag are always valid and mutually exclusive
        -- (assuming no physical shenanigans like manifacturing defects, etc.)
    end process state;

    -- address mux
    -- we use an asynchronous mux with user-supplied control signals to
    -- allow for same-cycle RAM access (see above).
    -- otherwise we would have to use a synchronous mux, which would
    -- delay the output by one cycle, and require a *real* state machine.
    -- **NOTE**: we don't need to do any bounds checking here, since
    --           the stack pointer is always valid.
    --
    -- **NOTE**: by default we are in peek mode, unless push or clear are
    --           asserted (clear implies empty_flag = '1', so we don't need
    --           to check for it explicitly).
    addr_mux: process(stack_pointer, empty_flag, push_en)
    begin
        if (push_en = '1' or empty_flag = '1') then
            addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
        else
            addr <= std_logic_vector(to_unsigned(stack_pointer - 1, addr'length));
        end if;
    end process addr_mux;

    -- output logic (if this even qualifies as logic)
    -- direct forward of internal flags to output pins
    empty <= empty_flag;
    full <= full_flag;
end stack_arch;