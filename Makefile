
all: simr

sim: simulate
simulate:
	vivado_hls -f simulate.tcl

simr: simulate_report
simulate_report: simulate
	cat VivadoTest/gonzosolution/csim/report/gonzomain_csim.log

syn: synthesize
synthesize:
	vivado_hls -f synthesize.tcl

synr: synthesize_report
synthesize_report: synthesize
	vi VivadoTest/gonzosolution/syn/report/testGonzoHardware_csynth.rpt

v: view
view:
	vi VivadoTest/gonzosolution/syn/report/testGonzoHardware_csynth.rpt

