-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY testbench IS
  END testbench;

  ARCHITECTURE behavior OF testbench IS 

  -- Component Declaration
          COMPONENT cordics
          PORT	( clk : in std_logic;
			  	Theta: in std_logic_vector (17 downto 0);
					Angle : in std_logic_vector(8 downto 0);
					sin,cos : out std_logic_vector (12 downto 0));
          END COMPONENT;

    --Inputs
	SIGNAL Theta :  std_logic_vector (17 downto 0) := "000000000000000000";
	SIGNAL clk :  std_logic := '0';
	SIGNAL Angle :  std_logic_vector(8 downto 0) := "000000000";
	
	--Outputs
	SIGNAL sin,cos  :  std_logic_vector (12 downto 0); 

          

  BEGIN

  -- Component Instantiation
          uut: cordics PORT MAP(
                  clk => clk,
                  Theta => Theta,
						Angle => Angle,
						sin   => sin,
						cos	=> cos
          );

	PROCESS
			BEGIN
			 while ( true) loop
				  clk <= '0'; wait for 1 ns;
				  clk <= '1'; wait for 1 ns;
			 end loop;
			END PROCESS;

  --  Test Bench Statements
	PROCESS
     BEGIN

        wait for 2 ns; -- wait until global set/reset completes
			--clk <= '0'; wait for 2 ns;
        -- Add user defined stimulus here
		  theta <= "101101000000000000"; Angle <= "000011110"; wait for 2 ns;
		  theta <= "011010100100001010"; Angle <= "000011110"; wait for 2 ns;

        wait; -- will wait forever
     END PROCESS tb1;
  --  End Test Bench 

  END;
