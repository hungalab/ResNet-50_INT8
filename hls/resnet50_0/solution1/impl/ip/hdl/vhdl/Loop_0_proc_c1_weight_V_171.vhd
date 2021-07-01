-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_171_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_171_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001011", 1 => "0001010", 2 => "1111101", 3 => "1110100", 
    4 => "1110011", 5 => "0000101", 6 => "1111101", 7 => "1111001", 
    8 => "1110000", 9 => "1110001", 10 => "1110010", 11 => "1101101", 
    12 => "1110100", 13 => "1101010", 14 => "1100110", 15 => "1101000", 
    16 => "1100010", 17 => "1001000", 18 => "1010100", 19 => "1100011", 
    20 => "1001010", 21 => "1101001", 22 => "1101000", 23 => "1100000", 
    24 => "1001110", 25 => "1111111", 26 => "0100011", 27 => "1101100", 
    28 => "1101101", 29 => "1101011", 30 => "1100000", 31 => "1011111", 
    32 => "0010100", 33 => "0110001", 34 to 35=> "1110001", 36 => "1110100", 
    37 => "1100111", 38 => "1100010", 39 => "1101011", 40 => "1110110", 
    41 => "1011011", 42 => "1111011", 43 => "1110100", 44 => "1101000", 
    45 => "1100011", 46 => "1011101", 47 => "1100000", 48 => "1010001" );

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

entity Loop_0_proc_c1_weight_V_171 is
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

architecture arch of Loop_0_proc_c1_weight_V_171 is
    component Loop_0_proc_c1_weight_V_171_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_171_rom_U :  component Loop_0_proc_c1_weight_V_171_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


