open_project VivadoTest
set_top testGonzoHardware
add_files VivadoTest/TriangleMesh.h -cflags "-std=c++0x"
add_files VivadoTest/TriangleMesh.cpp -cflags "-std=c++0x"
add_files VivadoTest/Hardware.h -cflags "-std=c++0x"
add_files VivadoTest/Hardware.cpp -cflags "-std=c++0x"
add_files VivadoTest/Gonzo.h -cflags "-std=c++0x"
add_files VivadoTest/Gonzo.cpp -cflags "-std=c++0x"
add_files VivadoTest/BBox.h
add_files -tb VivadoTest/testbench.cpp -cflags "-std=c++0x"
add_files -tb VivadoTest/TriangleMesh.h -cflags "-std=c++0x"
add_files -tb VivadoTest/TriangleMesh.cpp -cflags "-std=c++0x"
add_files -tb VivadoTest/Software.h -cflags "-std=c++0x"
add_files -tb VivadoTest/Software.cpp -cflags "-std=c++0x"
add_files -tb VivadoTest/Gonzo.h -cflags "-std=c++0x"
add_files -tb VivadoTest/Gonzo.cpp -cflags "-std=c++0x"
add_files -tb VivadoTest/BBox.h
open_solution "gonzosolution"
set_part {xc7z010iclg225-1l} -tool vivado
create_clock -period 200MHz -name default
set_clock_uncertainty 2000MHz
#source "./VivadoTest/gonzosolution/directives.tcl"
#csim_design
csynth_design
#cosim_design
#export_design -evaluate verilog -format ip_catalog -vendor "Gonzo" -library "gonzomain"
exit
