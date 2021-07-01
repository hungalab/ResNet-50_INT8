-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_38_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_38_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00000011", 1 => "00000000", 2 => "11111100", 3 => "00001100", 
    4 => "00011101", 5 => "00000111", 6 => "11100011", 7 => "11111111", 
    8 => "11101100", 9 => "11101101", 10 => "00001011", 11 => "00101110", 
    12 => "00011001", 13 => "11100111", 14 => "11111101", 15 => "11010111", 
    16 => "11010110", 17 => "00000111", 18 => "00111110", 19 => "00101011", 
    20 => "11101100", 21 => "11111111", 22 => "11001111", 23 => "11000011", 
    24 => "00000000", 25 => "01010011", 26 => "00111110", 27 => "11111001", 
    28 => "00001001", 29 => "11001110", 30 => "10111110", 31 => "11110111", 
    32 => "01001000", 33 => "00111111", 34 => "00000011", 35 => "00001011", 
    36 => "11011001", 37 => "11000010", 38 => "11101000", 39 => "00101010", 
    40 => "00111001", 41 => "00001001", 42 => "00001011", 43 => "11100010", 
    44 => "11010010", 45 => "11101001", 46 => "00011111", 47 => "00100011", 
    48 => "00010010" );

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

entity Loop_0_proc_c1_weight_V_38 is
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

architecture arch of Loop_0_proc_c1_weight_V_38 is
    component Loop_0_proc_c1_weight_V_38_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_38_rom_U :  component Loop_0_proc_c1_weight_V_38_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


