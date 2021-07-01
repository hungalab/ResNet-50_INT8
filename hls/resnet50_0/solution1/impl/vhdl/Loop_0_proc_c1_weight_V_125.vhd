-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_125_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_125_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00011110", 1 => "00100110", 2 => "00000111", 3 => "11100101", 
    4 => "11101010", 5 => "11111101", 6 => "00000011", 7 => "00011111", 
    8 => "00001001", 9 => "11010100", 10 => "10110111", 11 => "11011000", 
    12 => "11111100", 13 => "00001100", 14 => "00000010", 15 => "11001110", 
    16 => "10100110", 17 => "10110110", 18 => "11111101", 19 to 20=> "00100110", 
    21 => "11100111", 22 => "10111110", 23 => "10111010", 24 => "00000000", 
    25 => "01001111", 26 => "01010101", 27 => "00101110", 28 => "11110000", 
    29 => "11100110", 30 => "00000101", 31 => "01010000", 32 => "01110111", 
    33 => "01010000", 34 => "00000111", 35 => "11111111", 36 => "00000110", 
    37 => "00100110", 38 => "01010001", 39 => "01001000", 40 => "00000001", 
    41 => "10111010", 42 => "00000000", 43 => "00001001", 44 => "00011001", 
    45 => "00011111", 46 => "11111101", 47 => "10111000", 48 => "10010011" );

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

entity Loop_0_proc_c1_weight_V_125 is
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

architecture arch of Loop_0_proc_c1_weight_V_125 is
    component Loop_0_proc_c1_weight_V_125_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_125_rom_U :  component Loop_0_proc_c1_weight_V_125_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


