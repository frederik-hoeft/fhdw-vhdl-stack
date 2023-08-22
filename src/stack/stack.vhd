library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

entity stack is port( 
    clk, push, pop, clear : in std_logic;
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
    signal data : std_logic_vector(7 downto 0);
    signal push_en, pop_en, clear_en : std_logic;
    signal pop_data : std_logic_vector(7 downto 0);
    signal full_tmp, empty_tmp : std_logic;
	 
    signal stack_pointer : integer;
    signal ram_enable : std_logic;

    begin
        push_en <= push and not full_tmp;
        pop_en <= pop and not empty_tmp;
        clear_en <= clear;
        ram_enable <= push or pop or clear;

        RAMB4_S8_inst : RAMB4_S8 port map(
            we => push_en,
            en => ram_enable,
            rst => clear_en,
            clk => clk,
            addr => addr,
            di => din,
            do => pop_data);

        process(clk)
        begin
            if (rising_edge(clk)) then
                if (clear_en = '1') then
                    stack_pointer <= 0;
                elsif (push_en = '1') then
                    stack_pointer <= stack_pointer + 1;
                elsif (pop_en = '1') then
                    stack_pointer <= stack_pointer - 1;
                end if;
                if (stack_pointer = 512) then
                    full_tmp <= '1';
                else 
                    full_tmp <= '0';
                end if;
                if (stack_pointer = 0) then
                    empty_tmp <= '1';
                else 
                    empty_tmp <= '0';
                end if;
            end if;
        end process;

        addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
        data <= pop_data;
        dout <= data;
        full <= full_tmp;
        empty <= empty_tmp;
end stack_arch;