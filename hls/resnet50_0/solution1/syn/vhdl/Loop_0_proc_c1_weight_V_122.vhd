-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_122_rom is 
    generic(
             DWIDTH     : integer := 7; 
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


architecture rtl of Loop_0_proc_c1_weight_V_122_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0011110", 1 => "0011010", 2 => "0010100", 3 => "0000001", 
    4 => "0000100", 5 => "0001111", 6 => "0011110", 7 => "0001011", 
    8 => "0001010", 9 => "1111101", 10 => "1110010", 11 => "1110100", 
    12 => "0000000", 13 => "0001011", 14 => "0001101", 15 => "0001000", 
    16 => "1111010", 17 => "1101000", 18 => "1100100", 19 => "1110000", 
    20 => "1111001", 21 => "0001010", 22 => "1111100", 23 => "1110000", 
    24 => "1001101", 25 => "1001011", 26 => "1011110", 27 => "1100111", 
    28 => "0001111", 29 => "1111111", 30 => "1101010", 31 => "1010001", 
    32 => "1001101", 33 => "1100001", 34 => "1101000", 35 => "0011110", 
    36 => "0010101", 37 => "1111011", 38 => "1011011", 39 => "1010101", 
    40 => "1011100", 41 => "1101110", 42 => "0101100", 43 => "0011011", 
    44 => "0000111", 45 => "1100100", 46 => "1100001", 47 => "1110100", 
    48 => "0001000" );

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

entity Loop_0_proc_c1_weight_V_122 is
    generic (
        DataWidth : INTEGER := 7;
        AddressRange : INTEGER := 49;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of Loop_0_proc_c1_weight_V_122 is
    component Loop_0_proc_c1_weight_V_122_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_122_rom_U :  component Loop_0_proc_c1_weight_V_122_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


