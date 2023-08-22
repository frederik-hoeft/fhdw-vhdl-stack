library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

library unisim;
use unisim.vcomponents.all;

entity stack is
    port ( clk : in  STD_LOGIC;
           push : in  STD_LOGIC;
           pop : in  STD_LOGIC;
           clear : in  STD_LOGIC;
           din : in  STD_LOGIC;
           dout : out  STD_LOGIC;
           full : out  STD_LOGIC;
           empty : out  STD_LOGIC);
end stack;

architecture Behavioral of stack is

begin


end Behavioral;

