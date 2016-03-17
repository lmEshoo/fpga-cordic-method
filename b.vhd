LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY b IS
END b;
 
ARCHITECTURE behavior OF b IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         --reset : IN  std_logic;
         clk : IN  std_logic;
         angle : IN  std_logic_vector(7 downto 0);
         sin : OUT  std_logic_vector(12 downto 0);
         cos : OUT  std_logic_vector(12 downto 0)
        );
    END COMPONENT;
    

   --Inputs
  -- signal reset : std_logic := '0';
   signal clk : std_logic := '0';
   signal angle : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal sin : std_logic_vector(12 downto 0);
   signal cos : std_logic_vector(12 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          --reset => reset,
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
      wait for 250 ns;	

      wait for clk_period*10;

      -- insert stimulus here 
		 Angle <= "00011110";  wait for 100 ns;
		 Angle <= "00101101";  wait for 100 ns;
      wait;
   end process;

END;
