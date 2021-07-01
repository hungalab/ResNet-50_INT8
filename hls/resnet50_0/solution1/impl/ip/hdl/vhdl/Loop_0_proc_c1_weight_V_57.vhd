-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_57_rom is 
    generic(
             DWIDTH     : integer := 6; 
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


architecture rtl of Loop_0_proc_c1_weight_V_57_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000011", 1 => "000000", 2 => "000001", 3 => "111101", 4 => "111011", 
    5 => "111111", 6 => "111101", 7 => "000011", 8 => "111011", 9 => "110111", 
    10 => "111000", 11 => "111010", 12 => "111101", 13 => "110100", 14 => "000010", 
    15 => "111011", 16 => "110101", 17 => "110000", 18 => "110100", 19 => "110101", 
    20 => "101110", 21 => "111111", 22 => "111010", 23 => "110110", 24 => "000010", 
    25 => "000111", 26 => "000000", 27 => "110111", 28 => "111100", 29 => "111010", 
    30 => "110110", 31 => "001001", 32 => "010001", 33 => "001101", 34 => "111111", 
    35 => "111110", 36 => "111100", 37 => "111010", 38 => "000101", 39 => "001010", 
    40 => "001011", 41 => "111011", 42 => "111000", 43 => "111001", 44 => "110101", 
    45 => "111101", 46 => "111111", 47 => "111100", 48 => "111000" );

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

entity Loop_0_proc_c1_weight_V_57 is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 49;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of Loop_0_proc_c1_weight_V_57 is
    component Loop_0_proc_c1_weight_V_57_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_57_rom_U :  component Loop_0_proc_c1_weight_V_57_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


