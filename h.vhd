--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:23:53 02/23/2016
-- Design Name:   
-- Module Name:   H:/cordic/h.vhd
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
 
ENTITY h IS
END h;
 
ARCHITECTURE behavior OF h IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CORDIC
    PORT(
         clk : IN  std_logic;
         go : IN  std_logic;
         done : OUT  std_logic;
         angle : IN  signed(8 downto 0);
         sin : OUT  signed(12 downto 0);
         cos : OUT  signed(12 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal go : std_logic := '0';
   signal angle : signed(8 downto 0) := (others => '0');

 	--Outputs
   signal done : std_logic;
   signal sin : signed(12 downto 0);
   signal cos : signed(12 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CORDIC PORT MAP (
          clk => clk,
          go => go,
          done => done,
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

      -- insert stimulus here 1111111111111111111111111111111111111111111111111111111111100010
		Angle <= "000011110"; go<='1'; wait for 300ns;
		Angle <= "111100010"; go<='1'; wait for 325ns;
		Angle <= "000101101"; go<='1'; wait for 320ns;
		Angle <= "011010011"; go<='1'; wait for 320ns;		
		Angle <= "000111100"; go<='1'; wait for 320ns;
		Angle <= "001001011"; go<='1'; wait for 320ns;
		Angle <= "001000110"; go<='1'; wait for 320ns;
		Angle <= "000111100"; go<='1'; wait for 320ns;
		Angle <= "001000001"; go<='1'; wait for 320ns;
		Angle <= "001000011"; go<='1'; wait for 320ns;
		Angle <= "001000100"; go<='1'; wait for 320ns;
		Angle <= "001000101"; go<='1'; wait for 320ns;
		Angle <= "001000111"; go<='1'; wait for 320ns;
		Angle <= "000000000"; go<='1'; wait for 320ns;
		Angle <= "001010111"; go<='1'; wait for 320ns;
		Angle <= "001001111"; go<='1'; wait for 320ns;
		Angle <= "001001011"; go<='1'; wait for 320ns;
		Angle <= "001000111"; go<='1'; wait for 320ns;
		Angle <= "000110001"; go<='1'; wait for 320ns;
		Angle <= "001000110"; go<='1'; wait for 320ns;

		--Angle <= ""; go<='1'; wait for 300ns;
      wait;
   end process;

END;
