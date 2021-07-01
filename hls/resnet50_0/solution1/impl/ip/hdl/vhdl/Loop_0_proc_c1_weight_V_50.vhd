-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_50_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 49
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of Loop_0_proc_c1_weight_V_50_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000101", 1 => "11111100", 2 => "11101100", 3 => "11101000", 
    4 => "11011110", 5 => "11100001", 6 => "11011000", 7 => "00000111", 
    8 => "00000101", 9 => "11111001", 10 => "11101111", 11 => "11100000", 
    12 => "11010110", 13 => "11010000", 14 => "00001110", 15 => "00011001", 
    16 to 17=> "00010010", 18 => "00000001", 19 => "11110000", 20 => "11011010", 
    21 => "00001011", 22 => "00100010", 23 => "00101110", 24 => "00111001", 
    25 => "00101100", 26 => "00011110", 27 => "00000111", 28 => "11111110", 
    29 => "00001111", 30 => "00011100", 31 => "00111010", 32 => "01000110", 
    33 => "00111100", 34 => "00101111", 35 => "11110101", 36 => "11110010", 
    37 => "11110101", 38 => "00001010", 39 => "00010111", 40 => "00100101", 
    41 => "00101011", 42 => "11011010", 43 => "11011001", 44 => "11001011", 
    45 => "11010101", 46 => "11100011", 47 => "11110011", 48 => "00000100" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity Loop_0_proc_c1_weight_V_50 is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 49;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of Loop_0_proc_c1_weight_V_50 is
    component Loop_0_proc_c1_weight_V_50_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_50_rom_U :  component Loop_0_proc_c1_weight_V_50_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


