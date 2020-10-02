
----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:04:08 09/15/2020 
-- Design Name: 
-- Module Name:    divider - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE. NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

ENTITY divider IS
    PORT (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        start : IN STD_LOGIC;
        dividend : IN STD_LOGIC_VECTOR (7 DOWNTO 0);
        divisor : IN STD_LOGIC_VECTOR (3 DOWNTO 0);
        quotient : OUT STD_LOGIC_VECTOR (3 DOWNTO 0);
        remainder : OUT STD_LOGIC_VECTOR (3 DOWNTO 0);
        ready : OUT STD_LOGIC;
        overflow : OUT STD_LOGIC
    );
END divider;

ARCHITECTURE Behavioral OF divider IS
    -- Type for the FSM states
    TYPE state_type IS (idle, shift, chk);

    -- Inputs/outputs of the state register and the z, d, and i registers

    SIGNAL state, next_state : state_type;
    SIGNAL quo_rem_reg : unsigned(8 DOWNTO 0);
    SIGNAL divisor_reg : unsigned(3 DOWNTO 0);
    SIGNAL count : INTEGER := 1;

    -- The subtraction output 
    SIGNAL sub : unsigned(4 DOWNTO 0);
BEGIN

    -- counting cycles
    PROCESS (clk, reset)
    BEGIN
        IF (reset = '0') THEN
            count <= 0;
        ELSIF (clk'event AND clk = '1') THEN
            CASE state IS
                WHEN idle =>
                    count <= 0;

                WHEN chk =>
                    count <= count + 1;

                WHEN OTHERS => NULL;

            END CASE;
        END IF;
    END PROCESS;

    -- divide operation
    PROCESS (clk, reset)
    BEGIN
        IF (reset = '0') THEN
            quo_rem_reg <= (OTHERS => '0');
            divisor_reg <= (OTHERS => '0');
        ELSIF (clk'event AND clk = '1') THEN
            divisor_reg <= unsigned(divisor);
            CASE state IS
                WHEN idle =>
                    quo_rem_reg <= unsigned('0' & dividend);

                WHEN shift =>
                    quo_rem_reg(8 DOWNTO 1) <= quo_rem_reg(7 DOWNTO 0);
                    quo_rem_reg(0) <= '0';

                WHEN chk =>
                    IF (quo_rem_reg(8 DOWNTO 4) >= ('0' & divisor_reg)) THEN
                        quo_rem_reg <= sub(4 DOWNTO 0) & quo_rem_reg(3 DOWNTO 1) & '1';
                    END IF;
            END CASE;
        END IF;
    END PROCESS;

    -- next state
    PROCESS (state, start, dividend, divisor, count)
    BEGIN
        CASE state IS
            WHEN idle =>
                IF (start = '1') THEN
                    IF (dividend(7 DOWNTO 4) < divisor) THEN
                        next_state <= shift;
                    ELSE
                        next_state <= idle;
                    END IF;
                ELSE
                    next_state <= idle;
                END IF;

            WHEN shift =>
                next_state <= chk;

            WHEN chk =>
                IF (count + 1 = 4) THEN
                    next_state <= idle;
                ELSE
                    next_state <= shift;
                END IF;

        END CASE;
    END PROCESS;

    -- moore machine
    PROCESS (clk, reset)
    BEGIN
        IF (reset = '0') THEN
            state <= idle;
        ELSIF (clk'event AND clk = '1') THEN
            state <= next_state;
        END IF;
    END PROCESS;

    

    sub <= (quo_rem_reg(8 DOWNTO 4) - unsigned('0' & divisor));

    -- outputs
    quotient <= std_logic_vector(quo_rem_reg(3 DOWNTO 0));
    remainder <= std_logic_vector(quo_rem_reg(7 DOWNTO 4));
    ready <= '1' WHEN state = idle ELSE
        '0';
    overflow <= '1' WHEN (state = idle AND (dividend(7 DOWNTO 4) >= divisor)) ELSE
        '0';

END Behavioral;