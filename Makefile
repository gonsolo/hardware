all:
	vlog laber.v
	vcom hurz.vhd
	vsim -c -do "run -all; exit;" work.laber

c: clean
clean:
	rm -rf work transcript
