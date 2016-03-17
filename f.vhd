--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:19:21 02/23/2016
-- Design Name:   
-- Module Name:   H:/cordic/f.vhd
-- Project Name:  cordic
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CORDIC
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 use ieee.std_logic_arith.ALL;
use ieee.std_logic_signed.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY f IS
END f;
 
ARCHITECTURE behavior OF f IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CORDIC
    PORT(
         clk : IN  std_logic;
         angle : IN  signed(7 downto 0);
         sin : OUT  signed(12 downto 0);
         cos : OUT  signed(12 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal angle : signed(7 downto 0) := (others => '0');

 	--Outputs
   signal sin : signed(12 downto 0);
   signal cos : signed(12 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CORDIC PORT MAP (
          clk => clk,
          angle => angle,
          sin => sin,
          cos => cos
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		-- insert stimulus here 
		Angle <= "00011110"; go<='1'; wait for 110ns;
		Angle <= "00101101"; go<='1'; wait for 300ns;
		Angle <= "11010011"; go<='1'; wait for 300ns;		
		Angle <= "00111100"; go<='1'; wait for 300ns;
		Angle <= "01001011"; go<='1'; wait for 300ns;
		Angle <= "10110101"; go<='1'; wait for 300ns;
      wait;
   end process;

END;
