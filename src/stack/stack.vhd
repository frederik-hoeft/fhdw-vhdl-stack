library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

entity stack is port( 
    clk, push, pop, clear, peek : in std_logic;
    din : in std_logic_vector(7 downto 0);
    dout : out std_logic_vector(7 downto 0);
    full, empty : out std_logic);
end stack;

architecture stack_arch of stack is
    -- 512x8 Bit single point Block SelectRAM
    component RAMB4_S8 port(
        we : in std_logic; -- Write: Enable: DI ins RAM schreiben
        en : in std_logic; -- Enable: aktiviert die Komponente
        rst : in std_logic; -- Reset: setzt DO auf Null
        clk : in std_logic; -- Clock: Systemtakt
        addr : in std_logic_vector(8 downto 0); -- Address Bus
        di : in std_logic_vector(7 downto 0); -- Data Input Bus
        do : out std_logic_vector(7 downto 0)); -- Data Output Bus
    end component;

    signal addr : std_logic_vector(8 downto 0);
    signal push_en, pop_en, peek_en, ram_enable : std_logic;
    signal full_tmp : std_logic := '0';
    signal empty_tmp : std_logic := '1';
	 
    signal stack_pointer : integer range 0 to 255 := 0;
begin
    push_en <= push and not full_tmp;
    pop_en <= pop and not empty_tmp;
    peek_en <= peek and not empty_tmp;
    ram_enable <= push or pop or clear or peek;

    RAMB4_S8_inst : RAMB4_S8 port map(
        we => push_en,
        en => ram_enable,
        rst => clear,
        clk => clk,
        addr => addr,
        di => din,
        do => dout);

    core: process(clk)
    begin
        if (rising_edge(clk)) then
            if (clear = '1') then
                stack_pointer <= 0;
                full_tmp <= '0';
            elsif (push_en = '1') then
                if (stack_pointer = 255) then
                    full_tmp <= '1';
                else
                    stack_pointer <= stack_pointer + 1;
                end if;
            elsif (pop_en = '1') then
                if (full_tmp = '1') then
                    full_tmp <= '0';
                else
                    stack_pointer <= stack_pointer - 1;
                end if;
            end if;
        end if;
    end process core;
	 
    output_empty: process(stack_pointer)
    begin
        if (stack_pointer = 0) then
            empty_tmp <= '1';
        else
            empty_tmp <= '0';
        end if;
    end process output_empty;
	 
    addr_mux: process(pop_en, stack_pointer, peek_en)
    begin
        if ((pop_en = '1' or peek_en = '1') and full_tmp = '0') then
            addr <= std_logic_vector(to_unsigned(stack_pointer - 1, addr'length));
        else
            addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
        end if;
    end process addr_mux;
	
    empty <= empty_tmp;
    full <= full_tmp;
end stack_arch;