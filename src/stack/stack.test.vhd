-- FILEPATH: c:\Users\frederik\fhdw-vhdl-stack\src\stack\stack_tb.vhd
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity stack_tb is
end stack_tb;

architecture testbench of stack_tb is
    component stack is
        port( 
            clk, push, pop, clear : in std_logic;
            din : in std_logic_vector(7 downto 0);
            dout : out std_logic_vector(7 downto 0);
				sp : out std_logic_vector(8 downto 0);
            full, empty : out std_logic);
    end component;

    signal clk : std_logic := '0';
    signal push : std_logic := '0';
    signal pop : std_logic := '0';
    signal clear : std_logic := '0';
    signal din : std_logic_vector(7 downto 0) := (others => '0');
    signal dout : std_logic_vector(7 downto 0);
    signal full : std_logic;
    signal empty : std_logic;
    signal sp : std_logic_vector(8 downto 0);

    constant clock_period : time := 10 ns;

begin
    uut : stack port map(
        clk => clk,
        push => push,
        pop => pop,
        clear => clear,
        din => din,
        dout => dout,
        full => full,
		  sp => sp,
        empty => empty
    );
    
    clk_process : process
    begin
        while now < 24 us loop
            clk <= not clk;
            wait for clock_period / 2;
        end loop;
        wait;
    end process;

    test_process : process
    begin
        -- Test 1: Push and Pop
        push <= '1';
        din <= "00000001";
        wait for clock_period;
        push <= '0';
        wait for clock_period;
        pop <= '1';
        wait for clock_period;
        pop <= '0';
		  assert dout = "00000001" report "Test 1 failed" severity error;
        wait for clock_period;
        wait for clock_period;
        wait for clock_period;
        -- Test 2: Full
        for i in 0 to 511 loop
            push <= '1';
            din <= std_logic_vector(to_unsigned(i, din'length));
            wait for clock_period;
            push <= '0';
            wait for clock_period;
        end loop;
        assert full = '1' report "Test 2 failed" severity error;
        
        wait for clock_period;
        wait for clock_period;
        
        -- Test 3: Empty
        for i in 511 downto 0 loop
            pop <= '1';
            wait for clock_period;
            pop <= '0';
            assert to_integer(unsigned(dout)) = i report "Pop failed" severity error;
            wait for clock_period;
        end loop;
        assert empty = '1' report "Test 3 failed" severity error;

        -- Test 4: Clear
        push <= '1';
        din <= "00000001";
        wait for clock_period;
        push <= '0';
        wait for clock_period;
        clear <= '1';
        wait for clock_period;
        clear <= '0';
        wait for clock_period;
        assert empty = '1' report "Test 4 failed" severity error;

        wait;
    end process;
end testbench;