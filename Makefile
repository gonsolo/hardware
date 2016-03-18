
all: sim

sim: simulate
simulate:
	vivado_hls -f simulate.tcl

simr: simulate_report
simulate_report: simulate
	cat VivadoTest/gonzosolution/csim/report/testGonzoHardware_csim.log

s: synthesize
syn: synthesize
synthesize:
	vivado_hls -f synthesize.tcl

synr: synthesize_report
synthesize_report: synthesize
	vi VivadoTest/gonzosolution/syn/report/testGonzoHardware_csynth.rpt

v: view
view:
	vi VivadoTest/gonzosolution/syn/report/testGonzoHardware_csynth.rpt

c: cosimulate
cosim: cosimulate
cosimulate: synthesize
	vivado_hls -f cosimulate.tcl
