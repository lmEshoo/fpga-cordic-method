library IEEE;
use ieee.std_logic_1164.ALL;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_unsigned.ALL;
use ieee.numeric_std.all;


entity counter_4bits is
	port (clk:in STD_LOGIC;
			--reset: in STD_LOGIC;
			counter_4bits_OUT: out STD_LOGIC_VECTOR(3 downto 0));
end counter_4bits;

architecture Behavioral of counter_4bits is
signal tempy: std_logic_vector(3 downto 0):="0000";
begin
	process
	begin
		--if reset='1' then
			--tempy<="0000";
		wait until  (clk'event and clk='1');
			
			tempy<=tempy+1;
		
		--end if;
	end process;
	counter_4bits_OUT<=tempy;

end Behavioral;