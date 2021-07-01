############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project resnet50_3
set_top resnet50_3
add_files resnet50_3.cpp
add_files -tb tb_resnet50_3.cpp
open_solution "solution1"
set_part {xczu19eg-ffvc1760-2-i} -tool vivado
create_clock -period 10 -name default
config_export -format ip_catalog -rtl verilog
#source "./resnet50_3/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
