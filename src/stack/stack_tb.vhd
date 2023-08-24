---------------------------------------------------------------
--                          TestBench
---------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use std.textio.all;
use ieee.numeric_std.all;

entity stack_tb is
end stack_tb;

architecture test_bench of stack_tb is
    -- component declaration for the Unit Under Test (UUT)
    component stack is port( 
        clk, push, pop, clear, peek : in std_logic;
        din : in std_logic_vector(7 downto 0);
        dout : out std_logic_vector(7 downto 0);
        full, empty : out std_logic);
    end component;

    -- inputs
    signal clk : std_logic := '1';
    signal push : std_logic_vector(0 downto 0) := (others => '0');
    signal pop : std_logic_vector(0 downto 0) := (others => '0');
    signal peek : std_logic_vector(0 downto 0) := (others => '0');
    signal clear : std_logic_vector(0 downto 0) := (others => '0');
    signal din : std_logic_vector(7 downto 0) := (others => '0');

    -- outputs
    signal dout : std_logic_vector(7 downto 0);
    signal full : std_logic_vector(0 downto 0);
    signal empty : std_logic_vector(0 downto 0);

    -- simulation
    signal DebugVariable : boolean:=true;
    signal is_first_monitor_call : boolean := true;

    -- monitoring
    shared variable expected_full : string(1 downto 1);
    shared variable expected_empty : string(1 downto 1);
    shared variable expected_dout : string(8 downto 1);
    shared variable success : boolean := true;
    shared variable expected_eof : boolean := false;

    -- constants
    constant clock_period : time := 100 ns;
    --=============================================================
    --Functions
    function char2std_logic (ch: in character) return std_logic is
    begin
        case ch is
            when 'U' | 'u' => return 'U';
            when 'X' | 'x' => return 'X';
            when '0' => return '0';
            when '1' => return '1';
            when 'Z' | 'z' => return 'Z';
            when 'W' | 'w' => return 'W';
            when 'L' | 'l' => return 'L';
            when 'H' | 'h' => return 'H';
            when '-' => return '-';
            when others =>
        assert FALSE
            report "Illegal Character found" & ch
            severity error;
        return 'U';
        end case;
    end;

    function string2std_logic (s: string) return std_logic_vector is
        variable vector: std_logic_vector(s'LEFT - 1 downto 0);
    begin
        for i in s'range loop
            vector(i-1) := char2std_logic(s(i));
        end loop;
        return vector;
    end;

    -- converts std_logic into a character
    function std_logic2char(sl: std_logic) return character is
        variable c: character;
    begin
        case sl is
            when 'U' => c:= 'U';
            when 'X' => c:= 'X';
            when '0' => c:= '0';
            when '1' => c:= '1';
            when 'Z' => c:= 'Z';
            when 'W' => c:= 'W';
            when 'L' => c:= 'L';
            when 'H' => c:= 'H';
            when '-' => c:= '-';
        end case;
        return c;
    end std_logic2char;

    function std_logic2string(slv: std_logic_vector) return string is
        variable result : string (1 to slv'length);
        variable r : integer;
    begin
        r := 1;
        for i in slv'range loop
            result(r) := std_logic2char(slv(i));
            r := r + 1;
        end loop;
        return result;
    end std_logic2string;

    function assert_equals(expected: std_logic_vector; actual: std_logic_vector; name: string) return boolean is
        variable bit_equals : boolean;
        variable assert_success : boolean;
        variable bit_e : std_logic;
        variable bit_a : std_logic;
    begin
        assert_success := expected'length = actual'length;
        if (assert_success) then
            for i in expected'range loop
                bit_e := expected(i);
                bit_a := actual(i);
                case bit_e is
                    when '-' => bit_equals := true;
                    when others => bit_equals := (bit_e = bit_a);
                end case;
                assert_success := assert_success and bit_equals;
            end loop;
        end if;
        assert assert_success
            report "Assert failed for signal '" & name & "': expected: " & std_logic2string(expected) & ", actual: " & std_logic2string(actual)
            severity warning;
        return assert_success;
    end assert_equals;

-- Testbench
begin
    -- clock generator
    clk <= not clk after clock_period / 2;

    uut : stack port map(
        clk => clk,
        push => push(0),
        pop => pop(0),
        peek => peek(0),
        clear => clear(0),
        din => din,
        dout => dout,
        full => full(0),
        empty => empty(0)
    );

    STIMULI: process(clk)
        file testpattern: text OPEN READ_MODE is "tb-inputs.txt";
        variable var_line: line;
        variable whitespace: character;
        variable buffer_1: string(1 downto 1);
        variable buffer_8: string(8 downto 1);
    begin
        assert DebugVariable report "STIMULI" severity note;
        if(falling_edge(clk)) then
            if(not endfile(testpattern)) then
                readline(testpattern, var_line);
                -- push
                read(var_line, buffer_1);
                push <= string2std_logic(buffer_1);
                read(var_line, whitespace);
                -- pop
                read(var_line, buffer_1);
                pop <= string2std_logic(buffer_1);
                read(var_line, whitespace);
                -- peek
                read(var_line, buffer_1);
                peek <= string2std_logic(buffer_1);
                read(var_line, whitespace);
                -- clear
                read(var_line, buffer_1);
                clear <= string2std_logic(buffer_1);
                read(var_line, whitespace);
                -- din
                read(var_line, buffer_8);
                din <= string2std_logic(buffer_8);
            else
                push <= "0";
                pop <= "0";
                peek <= "0";
                clear <= "1";
                din <= (others => '0');
            end if;
        end if;
    end process STIMULI;

    RESPONSE: process(clk)
        file comparison_pattern: text OPEN READ_MODE is "tb-expected.txt";
        variable var_line: line;
        variable whitespace: character;
        variable buffer_1: string(1 downto 1);
        variable buffer_8: string(8 downto 1);
    begin
        assert DebugVariable report "EXPECTED" severity note;
        if(rising_edge(clk)) then
            if(now >= clock_period) then
                success := true;
                if(not endfile(comparison_pattern)) then
                    readline(comparison_pattern, var_line);
                    -- full
                    read(var_line, buffer_1);
                    expected_full := buffer_1;
                    read(var_line, whitespace);
                    success := success and assert_equals(string2std_logic(expected_full), full, "full");

                    -- empty
                    read(var_line, buffer_1);
                    expected_empty := buffer_1;
                    read(var_line, whitespace);
                    success := success and assert_equals(string2std_logic(expected_empty), empty, "empty");
                    
                    -- dout
                    read(var_line, buffer_8);
                    expected_dout := buffer_8;
                    success := success and assert_equals(string2std_logic(expected_dout), dout, "dout");
                else 
                    expected_eof := true;
                    expected_full := (others => 'X');
                    expected_empty := (others => 'X');
                    expected_dout := (others => 'X');
                end if;
            end if;
        end if;
    end process RESPONSE;

    MONITOR: process(clk)
        file protocol: text OPEN WRITE_MODE is "tb-log.csv";
        variable var_line: line;
        variable separator: character := ',';
        variable v_push: string(1 downto 1);
        variable v_pop: string(1 downto 1);
        variable v_peek: string(1 downto 1);
        variable v_clear: string(1 downto 1);
        variable v_din: string(8 downto 1);
        variable v_full: string(1 downto 1);
        variable v_empty: string(1 downto 1);
        variable v_dout: string(8 downto 1);
        variable v_status: string(7 downto 1);
        variable simulation_time: time;
    begin
        assert DebugVariable report "MONITOR" severity note;
        if (is_first_monitor_call) then
            is_first_monitor_call <= false;
            write(var_line, "<STATUS> at <TIME> (@");
            write(var_line, clock_period);
            write(var_line, "),,push,pop,peek,clear,din,,full(e:a),empty(e:a),dout(e,a)");
            writeline(protocol, var_line);
        end if;
        if(now >= clock_period and not expected_eof) then
            if(rising_edge(clk)) then
                v_push := std_logic2string(push);
                v_pop := std_logic2string(pop);
                v_peek := std_logic2string(peek);
                v_clear := std_logic2string(clear);
                v_din := std_logic2string(din);
                v_push := std_logic2string(push);
                v_full := std_logic2string(full);
                v_empty := std_logic2string(empty);
                v_dout := std_logic2string(dout);
                if (success) then
                    v_status := "SUCCESS";
                else
                    v_status := "FAILURE";
                end if;
                simulation_time := now;
                write(var_line, v_status & " at ");
                write(var_line, simulation_time);
                write(var_line, separator);
                write(var_line, separator);
                write(var_line, v_push);
                write(var_line, separator);
                write(var_line, v_pop);
                write(var_line, separator);
                write(var_line, v_peek);
                write(var_line, separator);
                write(var_line, v_clear);
                write(var_line, separator);
                write(var_line, v_din);
                write(var_line, separator);
                write(var_line, separator);
                write(var_line, expected_full & ":" & v_full);
                write(var_line, separator);
                write(var_line, expected_empty & ":" & v_empty);
                write(var_line, separator);
                write(var_line, expected_dout & ":" & v_dout);
                writeline(protocol, var_line);
            end if;
        end if;     
    end process MONITOR;
end test_bench;