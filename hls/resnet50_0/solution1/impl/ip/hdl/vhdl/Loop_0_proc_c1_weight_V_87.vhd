-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity Loop_0_proc_c1_weight_V_87_rom is 
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


architecture rtl of Loop_0_proc_c1_weight_V_87_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0001110", 1 => "0000110", 2 => "1111111", 3 => "1111010", 
    4 => "0000000", 5 => "0010011", 6 => "0001000", 7 to 9=> "0001001", 
    10 => "0010001", 11 => "0000101", 12 => "0001100", 13 => "0001000", 
    14 => "0001100", 15 => "0001111", 16 => "0100001", 17 => "0011111", 
    18 => "0101001", 19 => "0100010", 20 => "0010010", 21 => "1111010", 
    22 => "0000110", 23 => "0011011", 24 => "0101000", 25 => "0101001", 
    26 => "0011000", 27 => "0000011", 28 => "1111110", 29 => "1111111", 
    30 => "0000111", 31 => "0011101", 32 => "0011000", 33 => "0001001", 
    34 => "1110001", 35 => "1111111", 36 => "0000111", 37 => "0001111", 
    38 => "0010010", 39 => "0010100", 40 => "0000110", 41 => "1110001", 
    42 => "0001100", 43 => "0001001", 44 => "0000111", 45 => "0000100", 
    46 => "0000011", 47 => "1111100", 48 => "1110000" );

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

entity Loop_0_proc_c1_weight_V_87 is
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

architecture arch of Loop_0_proc_c1_weight_V_87 is
    component Loop_0_proc_c1_weight_V_87_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    Loop_0_proc_c1_weight_V_87_rom_U :  component Loop_0_proc_c1_weight_V_87_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


