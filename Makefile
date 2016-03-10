all:
	verilator --cc laber.v --exe main.cpp
	cd obj_dir; make -f Vlaber.mk; ./Vlaber

sim:
	vlog laber.v nille.v
	vcom hurz.vhd
	vsim -c -do "run -all; exit;" work.laber

c: clean
clean:
	rm -rf work transcript obj_dir
