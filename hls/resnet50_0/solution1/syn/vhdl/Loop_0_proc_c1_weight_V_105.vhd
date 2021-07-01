-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_105_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_105_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11110011", 1 => "11111110", 2 => "11111001", 3 => "00000101", 
    4 => "00000001", 5 => "11111110", 6 => "11111111", 7 => "00000000", 
    8 => "00001001", 9 => "00001000", 10 => "00100001", 11 to 12=> "00011100", 
    13 => "00011000", 14 => "11111011", 15 => "00001010", 16 => "00001110", 
    17 => "00101011", 18 => "00110100", 19 => "00101110", 20 => "00101001", 
    21 => "00000111", 22 => "00011010", 23 => "00101101", 24 => "01100011", 
    25 => "01110011", 26 => "01100110", 27 => "01001111", 28 => "00000000", 
    29 => "00010100", 30 => "00101011", 31 => "01101101", 32 => "01111111", 
    33 => "01110011", 34 => "01010101", 35 => "11111011", 36 => "00010011", 
    37 => "00100001", 38 => "01011110", 39 => "01101111", 40 => "01100000", 
    41 => "01001010", 42 => "11111010", 43 => "00001110", 44 => "00011011", 
    45 => "01001110", 46 => "01010011", 47 => "01001100", 48 => "01000011" );

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

entity Loop_0_proc_c1_weight_V_105 is
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

architecture arch of Loop_0_proc_c1_weight_V_105 is
    component Loop_0_proc_c1_weight_V_105_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_105_rom_U :  component Loop_0_proc_c1_weight_V_105_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


