-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6 is
port (
    in0:  in  std_logic_vector(6 - 1 downto 0);
    in1:  in  std_logic_vector(8 - 1 downto 0);
    in2:  in  std_logic_vector(6 - 1 downto 0);
    dout: out std_logic_vector(13 - 1 downto 0));

    attribute use_dsp : string;
    attribute use_dsp of resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6 : entity is "yes";

end entity;

architecture behav of resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6 is
    signal a       : signed(27-1 downto 0);
    signal b       : signed(18-1 downto 0);
    signal c       : signed(48-1 downto 0);
    signal m       : signed(45-1 downto 0);
    signal p       : signed(48-1 downto 0);
begin
a  <= signed(resize(unsigned(in0), 27));
b  <= signed(resize(unsigned(in1), 18));
c  <= signed(resize(unsigned(in2), 48));

m  <= a * b;
p  <= m + c;

dout <= std_logic_vector(resize(unsigned(p), 13));

end architecture;
Library IEEE;
use IEEE.std_logic_1164.all;

entity resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1 is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        din2 : IN STD_LOGIC_VECTOR(din2_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1 is
    component resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6 is
        port (
            in0 : IN STD_LOGIC_VECTOR;
            in1 : IN STD_LOGIC_VECTOR;
            in2 : IN STD_LOGIC_VECTOR;
            dout : OUT STD_LOGIC_VECTOR);
    end component;



begin
    resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6_U :  component resnet50_2_mac_muladd_6ns_8ns_6ns_13_1_1_DSP48_6
    port map (
        in0 => din0,
        in1 => din1,
        in2 => din2,
        dout => dout);

end architecture;


