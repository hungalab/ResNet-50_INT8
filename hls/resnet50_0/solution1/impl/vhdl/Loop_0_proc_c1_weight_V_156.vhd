-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_156_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_156_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110001", 1 => "11110101", 2 => "11111101", 3 => "00000100", 
    4 => "00000000", 5 => "11111100", 6 => "11110011", 7 => "11111010", 
    8 => "00000010", 9 => "00000001", 10 => "00000000", 11 => "11101011", 
    12 => "11111101", 13 => "00001011", 14 => "11110110", 15 => "11111110", 
    16 => "11111111", 17 => "11001000", 18 => "10001101", 19 => "10101011", 
    20 => "11111101", 21 => "11111011", 22 => "11111101", 23 => "00000101", 
    24 => "11001100", 25 => "10010100", 26 => "10011111", 27 => "11111010", 
    28 => "11111110", 29 => "00000001", 30 => "00001110", 31 => "00000101", 
    32 => "11101101", 33 => "11101111", 34 => "00001100", 35 => "11111010", 
    36 => "11111111", 37 => "11111110", 38 => "00001010", 39 => "00001101", 
    40 => "00000110", 41 => "11111111", 42 => "00000001", 43 => "00000011", 
    44 => "11111111", 45 => "00000011", 46 => "11111111", 47 => "11111011", 
    48 => "11111110" );

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

entity Loop_0_proc_c1_weight_V_156 is
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

architecture arch of Loop_0_proc_c1_weight_V_156 is
    component Loop_0_proc_c1_weight_V_156_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_156_rom_U :  component Loop_0_proc_c1_weight_V_156_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


