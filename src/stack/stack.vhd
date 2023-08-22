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
    signal ram_we, ram_rst, ram_clk : std_logic;
    signal ram_addr : std_logic_vector(8 downto 0);
    signal stack_pointer : integer;
begin
    ram : RAMB4_S8 port map(
        we => ram_we, en => '1', rst => ram_rst, clk => clk, 
        addr => ram_addr, di => din, do => dout);
    
    process(clk)
    begin
        if rising_edge(clk) then
            -- Clear the RAM and reset the stack pointer on clear signal
            if clear = '1' then
                ram_we <= '1';
                ram_rst <= '1';
                ram_addr <= (others => '0');
                stack_pointer <= 0;
            else
                ram_we <= '0';
                ram_rst <= '0';

                -- Push
                if push = '1' and full = '0' then
                    ram_we <= '1';
                    ram_addr <= std_logic_vector(to_unsigned(stack_pointer, ram_addr'length));
                    stack_pointer <= stack_pointer + 1;
                end if;

                -- Pop
                if pop = '1' and empty = '0' then
                    ram_addr <= std_logic_vector(to_unsigned(stack_pointer - 1, ram_addr'length));
                    stack_pointer <= stack_pointer - 1;
                end if;
            end if;
        end if;
    end process;

    -- Detect full and empty conditions
    full <= '1' when stack_pointer >= 512 else '0';
    empty <= '1' when stack_pointer = 0 else '0';

end stack_arch;

