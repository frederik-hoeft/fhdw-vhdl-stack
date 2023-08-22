library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity stack_test is
end entity;

architecture test of stack_test is
    component stack is
        port (
            clk : in std_logic;
            push : in std_logic;
            din : in std_logic_vector(7 downto 0);
            pop : in std_logic;
            clear : in std_logic;
            pop_data : out std_logic_vector(7 downto 0);
            full : out std_logic;
            empty : out std_logic
        );
    end component;

    signal clk : std_logic := '0';
    signal push : std_logic;
    signal din : std_logic_vector(7 downto 0);
    signal pop : std_logic;
    signal clear : std_logic;
    signal pop_data : std_logic_vector(7 downto 0);
    signal full : std_logic;
    signal empty : std_logic;

begin
    uut : stack port map (
        clk => clk,
        push => push,
        din => din,
        pop => pop,
        clear => clear,
        pop_data => pop_data,
        full => full,
        empty => empty
    );

    process
    begin
        wait for 10 ns;
        clk <= not clk;
    end process;

    -- Test pushing and popping a single value
    procedure test_push_pop_single_value(
        constant value : std_logic_vector(7 downto 0);
        constant expected_pop_data : std_logic_vector(7 downto 0)
    ) is
    begin
        push <= '1';
        din <= value;
        wait for 10 ns;
        push <= '0';
        pop <= '1';
        wait for 10 ns;
        pop <= '0';
        assert pop_data = expected_pop_data report "Unexpected pop data" severity error;
        assert empty = '1' report "Stack should be empty" severity error;
    end procedure;

    -- Test pushing and popping multiple values
    procedure test_push_pop_multiple_values(
        constant values : std_logic_vector(7 downto 0) array(0 to 2);
        constant expected_pop_data : std_logic_vector(7 downto 0) array(0 to 2)
    ) is
    begin
        for i in values'range loop
            push <= '1';
            din <= values(i);
            wait for 10 ns;
            push <= '0';
        end loop;
        for i in values'range loop
            pop <= '1';
            wait for 10 ns;
            pop <= '0';
            assert pop_data = expected_pop_data(i) report "Unexpected pop data" severity error;
        end loop;
        assert empty = '1' report "Stack should be empty" severity error;
    end procedure;

    -- Test clearing the stack
    procedure test_clear_stack(
        constant values : std_logic_vector(7 downto 0) array(0 to 2)
    ) is
    begin
        for i in values'range loop
            push <= '1';
            din <= values(i);
            wait for 10 ns;
            push <= '0';
        end loop;
        clear <= '1';
        wait for 10 ns;
        clear <= '0';
        assert empty = '1' report "Stack should be empty" severity error;
    end procedure;

    -- Test filling the stack to capacity
    procedure test_fill_stack(
        constant value : std_logic_vector(7 downto 0)
    ) is
    begin
        for i in 0 to 511 loop
            push <= '1';
            din <= value;
            wait for 10 ns;
            push <= '0';
        end loop;
        assert full = '1' report "Stack should be full" severity error;
    end procedure;

    -- Test overflowing the stack
    procedure test_overflow_stack(
        constant value : std_logic_vector(7 downto 0)
    ) is
    begin
        for i in 0 to 511 loop
            push <= '1';
            din <= value;
            wait for 10 ns;
            push <= '0';
        end loop;
        push <= '1';
        din <= value;
        wait for 10 ns;
        push <= '0';
        assert full = '1' report "Stack should be full" severity error;
    end procedure;

begin
    -- Test pushing and popping a single value
    test_push_pop_single_value(x"00", x"00");
    test_push_pop_single_value(x"7f", x"7f");
    test_push_pop_single_value(x"ff", x"ff");

    -- Test pushing and popping multiple values
    test_push_pop_multiple_values(
        values => (x"00", x"7f", x"ff"),
        expected_pop_data => (x"ff", x"7f", x"00")
    );

    -- Test clearing the stack
    test_clear_stack(values => (x"00", x"7f", x"ff"));

    -- Test filling the stack to capacity
    test_fill_stack(value => x"00");

    -- Test overflowing the stack
    test_overflow_stack(value => x"00");

    wait;
end architecture;