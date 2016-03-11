############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project VivadoTest
set_top gonzomain
add_files VivadoTest/bla.cpp -cflags "-std=c++0x"
add_files -tb VivadoTest/testbench.cpp -cflags "-std=c++0x"
open_solution "gonzosolution"
set_part {xc7z010iclg225-1l} -tool vivado
create_clock -period 400MHz -name default
#source "./VivadoTest/gonzosolution/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -evaluate verilog -format ip_catalog -vendor "Gonzo" -library "gonzomain"
