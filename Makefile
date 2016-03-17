
all: sim 

sim:
	vivado_hls -f simulate.tcl

syn:
	vivado_hls -f synthesize.tcl


