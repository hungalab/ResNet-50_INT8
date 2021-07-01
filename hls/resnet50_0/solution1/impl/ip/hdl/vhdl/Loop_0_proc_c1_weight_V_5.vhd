-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_5_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_5_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001100", 1 => "0001101", 2 => "0000101", 3 => "0000110", 
    4 => "0001010", 5 => "0001000", 6 => "0001100", 7 => "0001010", 
    8 => "0001001", 9 => "0000000", 10 => "1111011", 11 to 12=> "0000001", 
    13 to 14=> "0000111", 15 => "0000101", 16 => "1111100", 17 => "1110001", 
    18 to 19=> "1101100", 20 => "1111001", 21 => "0001010", 22 => "0000000", 
    23 => "1101101", 24 => "1100100", 25 => "1010100", 26 => "1010110", 
    27 => "1110011", 28 => "0001000", 29 => "0000001", 30 => "1101010", 
    31 => "1011001", 32 => "1001110", 33 => "1010001", 34 => "1101111", 
    35 => "0001010", 36 => "1111110", 37 => "1110001", 38 => "1011110", 
    39 => "1010110", 40 => "1011101", 41 => "1110011", 42 => "0001111", 
    43 => "0001011", 44 => "1111101", 45 => "1111011", 46 => "1110100", 
    47 => "1110001", 48 => "0000000" );

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

entity Loop_0_proc_c1_weight_V_5 is
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

architecture arch of Loop_0_proc_c1_weight_V_5 is
    component Loop_0_proc_c1_weight_V_5_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_5_rom_U :  component Loop_0_proc_c1_weight_V_5_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


