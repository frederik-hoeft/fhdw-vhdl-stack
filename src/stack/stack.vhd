library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

entity stack is port( 
    clk, push, pop, clear : in std_logic;
    din : in std_logic_vector(7 downto 0);
    dout : out std_logic_vector(7 downto 0);
    sp : out std_logic_vector(8 downto 0); -- tmp for debugging
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
    signal push_en, pop_en, clear_en : std_logic;
    signal pop_data : std_logic_vector(7 downto 0);
    signal full_tmp : std_logic := '0';
	 signal empty_tmp : std_logic := '1';
	 
    signal stack_pointer : integer := 0;
    signal ram_enable : std_logic;
begin
    push_en <= push and not full_tmp;
    pop_en <= pop and not empty_tmp;
    clear_en <= clear;
    ram_enable <= push or pop or clear;

    -- tmp
    sp <= std_logic_vector(to_unsigned(stack_pointer, sp'length));

    RAMB4_S8_inst : RAMB4_S8 port map(
        we => push_en,
        en => ram_enable,
        rst => clear_en,
        clk => clk,
        addr => addr,
        di => din,
        do => pop_data);

    core: process(clk)
    begin
        if (rising_edge(clk)) then
            if (clear_en = '1') then
                stack_pointer <= 0;
                full_tmp <= '0';
            elsif (push_en = '1') then
                if (stack_pointer = 511) then
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
					 dout <= pop_data;
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
	
	 full <= full_tmp;
    addr <= std_logic_vector(to_unsigned(stack_pointer, addr'length));
    --dout <= data;
    empty <= empty_tmp;
end stack_arch;