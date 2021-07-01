-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_71_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_71_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1110001", 1 => "1111000", 2 => "1110110", 3 => "1111111", 
    4 => "1111110", 5 => "1111010", 6 => "1110010", 7 => "1111000", 
    8 => "1111110", 9 => "0000010", 10 => "0001100", 11 => "0001101", 
    12 => "0001001", 13 => "0000100", 14 => "1110101", 15 => "0000001", 
    16 => "1111111", 17 => "0010000", 18 => "0010010", 19 => "0010000", 
    20 => "0000100", 21 => "1111111", 22 => "0000111", 23 => "0010011", 
    24 to 25=> "0100110", 26 => "0011100", 27 => "0010111", 28 => "1111010", 
    29 => "0000110", 30 => "0010010", 31 => "0100000", 32 => "0100010", 
    33 => "0011110", 34 => "0010110", 35 => "1110001", 36 => "0000100", 
    37 => "0001110", 38 to 39=> "0011001", 40 to 41=> "0010110", 42 => "1101101", 
    43 => "0000000", 44 => "0000001", 45 => "0010000", 46 => "0010100", 
    47 => "0001011", 48 => "0001110" );

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

entity Loop_0_proc_c1_weight_V_71 is
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

architecture arch of Loop_0_proc_c1_weight_V_71 is
    component Loop_0_proc_c1_weight_V_71_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_71_rom_U :  component Loop_0_proc_c1_weight_V_71_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


