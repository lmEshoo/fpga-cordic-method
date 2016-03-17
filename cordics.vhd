library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.ALL;
use ieee.std_logic_signed.ALL;

--use IEEE.NUMERIC_STD.ALL;


entity cordics is
	PORT	( clk,go     : in std_logic;
			  done     : out std_logic;
			  Theta   : in signed (18 downto 0);
			  Angle   : in signed(8 downto 0);
			  sin,cos : out signed (12 downto 0);
			  iii     : out unsigned( 3 downto 0 ));
end cordics;

architecture Behavioral of cordics is

signal Zi: signed (20 downto 0):= "000000000000000000000";
signal state : std_logic_vector ( 3 downto 0):= "0000";
signal i : unsigned( 3 downto 0):= "0000";
signal xi,yi : signed (12 downto 0):= "0000000000000";
--signal blah : std_logic_vector(10 downto 0):="00000000000";
begin
process
begin

wait until  (clk'event and clk='1');
case state is
	when "0000" => if(go='1') then
							i <= "0000"; 
							xi <= "0100110110111"; yi<= "0000000000000";
							zi <= angle&"000000000000"; 
							state <= "0001";
						else
							state <= "0000";
						end if;
						
	when "0001" => if (zi<0) then
						state <= "0100";
						else state <= "0010"; 
						end if;
	when "0010" => zi <= zi-("00"&Theta); 
						xi<= xi- shr(yi,i);	--blah(i downto 0)&yi(8 downto i); 
						yi<= yi+ shr(xi,i);	--blah(i downto 0)&xi(8 downto i); 
						i<=i+"0001"; state <= "0011"; 
	when "0011" => if(i=10) then 
							sin<=yi; 
							cos<=xi; 
							state<="0110";
						else state<= "0001"; 
						end if;
	when "0100" => zi<= zi + ("00"&Theta); 
						xi<= xi+shr(yi,i);--blah(i downto 0)&yi(8 downto i); 
						yi<= yi- shr(xi,i);--blah(i downto 0)&xi(8 downto i); 
						i<=i+"0001"; state <= "0101";
						
	
	when "0101" => if(i=10) then  
						sin<=yi; 
						cos<=xi; 
						state<="0110";
						else state<= "0001"; 
						end if;
	when "0110" => state<="0000";
	when others => state<="0000";
end case;
end process;
iii<=i;
done <= '1' when (state= "0110") else '0';
 
end Behavioral;

