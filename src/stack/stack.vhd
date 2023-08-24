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
    signal full_tmp : std_logic := '0';
    signal empty_tmp : std_logic := '1';

    -- 8 bit stack pointer (0 to 255) pointing to the next free address
    -- or, if full, to the last used address (255).
    signal stack_pointer : integer range 0 to 256 := 0;
begin
    RAMB4_S8_inst : RAMB4_S8 port map(
        we => push_en,
        en => ram_enable,
        rst => clear,
        clk => clk,
        addr => addr,
        di => din,
        do => dout);

    push_en <= push and not full_tmp;
    pop_en <= pop and not empty_tmp;
    peek_en <= peek and not empty_tmp;
    ram_enable <= push or pop or clear or peek;
    
    core: process(clk)
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
    end process core;

    output: process(stack_pointer)
    begin
        if (stack_pointer = 0) then
            empty_tmp <= '1';
        else
            empty_tmp <= '0';
        end if;
        if (stack_pointer > 255) then
            full_tmp <= '1';
        else
            full_tmp <= '0';
        end if;
    end process output;

    addr_mux: process(stack_pointer, clear, push_en)
    begin
        if (clear = '1' or push_en = '1') then
            addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
        else
            addr <= std_logic_vector(to_unsigned(stack_pointer - 1, addr'length));
        end if;
    end process addr_mux;

    empty <= empty_tmp;
    full <= full_tmp;
end stack_arch;