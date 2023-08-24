library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

-- 256x8 Bit Stack
entity stack is port( 
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

    -- sanitized input signals
    signal push_en, pop_en, peek_en, ram_enable : std_logic;

    -- internal flags (status bits)
    -- these flags are directly derived from the stack pointer. 
    -- let's hope the synthesis tool is smart enough to optimize this into
    -- asynchronous logic.
    -- introducing a state machine for this would definitely result in additional
    -- flip-flops, which would be wasteful.
    signal full_flag : std_logic := '0';
    signal empty_flag : std_logic := '1';

    -- 9 bit stack pointer (0 to 256) pointing to the next free address.
    -- we use 9 bits to avoid overflow when incrementing the stack pointer.
    -- at the same time we can use the MSB as a full flag, simplifying the 
    -- logic required to detect a full stack.
    signal stack_pointer : integer range 0 to 256 := 0;
begin
    -- instantiate RAM
    RAMB4_S8_inst : RAMB4_S8 port map(
        we => push_en,
        en => ram_enable,
        rst => clear,
        clk => clk,
        addr => addr,
        di => din,
        do => dout);

    -- sanitize input signals asynchonously
    -- we require a small additional setup time to take into account the
    -- propagation delay of this logic and our address mux.
    push_en <= push and not full_flag;
    pop_en <= pop and not empty_flag;
    peek_en <= peek and not empty_flag;

    -- we want to allow for same-cycle RAM access (signal -> rising edge -> data < 1 cycle), 
    -- so we just directly forward the user-supplied control signals to the RAM.
    -- this obviously means that these signals must be stable, but that's
    -- a valid assumption/requirement for the user of this component
    -- (it's a synchronous design after all).
    -- **NOTE**: we don't really need to sanitize the ram_enable signal, since
    --           the stack pointer is always valid when the RAM is enabled (9 bit),
    --           but we do it anyway for consistency.
    ram_enable <= push_en or pop_en or peek_en or clear;
    
    -- "state machine" transitions (synchronous stack pointer manipulation)
    -- signals are processed on rising edge of clock in the following order:
    -- 1. clear: reset stack pointer to 0
    -- 2. push: increment stack pointer
    -- 3. pop: decrement stack pointer
    -- 3. peek: read from stack pointer - 1 (parallel to pop)
    -- **NOTE**: the order of these signals is important, and must match
    --           the order in which signals are processed in the address
    --           mux below. Otherwise we could read from the wrong address, 
    --           or even underflow the stack.
    --
    -- **NOTE**: attempts to over or underflow the stack will be ignored.
    --           it's the user's responsibility to check the full/empty flags
    --           before pushing/popping.
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
    -- you could probably call these flags the "virtual state" of the stack.
    -- in any case, these are really just representations of the stack pointer,
    -- so we update them here.
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
    --           the stack pointer is always valid when the RAM is enabled.
    --
    -- **NOTE**: do not change the order of evaluation here, or you will
    --           break the stack. Clear/push must be evaluated before pop/peek
    --           to ensure correct operation when multiple, mutually exclusive
    --           signals are asserted at the same time.
    addr_mux: process(stack_pointer, clear, push_en)
    begin
        if (clear = '1' or push_en = '1') then
            addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
        else
            addr <= std_logic_vector(to_unsigned(stack_pointer - 1, addr'length));
        end if;
    end process addr_mux;

    -- output logic, if this even qualifies as logic
    -- direct forward of internal flags
    empty <= empty_flag;
    full <= full_flag;
end stack_arch;