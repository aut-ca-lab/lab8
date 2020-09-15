--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:39:00 09/15/2020
-- Design Name:   
-- Module Name:   E:/Computer Architecture/L8/test/divider_tb.vhd
-- Project Name:  L8
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: divider
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
use std.env.finish;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY divider_tb IS
END divider_tb;
 
ARCHITECTURE behavior OF divider_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT divider
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         start : IN  std_logic;
         dividend : IN  std_logic_vector(7 downto 0);
         divisor : IN  std_logic_vector(3 downto 0);
         quotient : OUT  std_logic_vector(3 downto 0);
         remainder : OUT  std_logic_vector(3 downto 0);
         ready : OUT  std_logic;
         overflow : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal start : std_logic := '0';
   signal dividend : std_logic_vector(7 downto 0) := (others => '0');
   signal divisor : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal quotient : std_logic_vector(3 downto 0);
   signal remainder : std_logic_vector(3 downto 0);
   signal ready : std_logic;
   signal overflow : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divider PORT MAP (
          clk => clk,
          reset => reset,
          start => start,
          dividend => dividend,
          divisor => divisor,
          quotient => quotient,
          remainder => remainder,
          ready => ready,
          overflow => overflow
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
      dividend <= "01011101";
      divisor <= "1110";
      -- hold reset state for 12 ns.
      wait for 12 ns;
      reset <= '1';
      start <= '1';
      wait for clk_period;
      start <= '0';


      wait for clk_period*10;

      finish;
   end process;

END;
