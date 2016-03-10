all: test1 test2

test1:
	@echo "========== Testing verilator =========="
	@verilator --cc laber.v --exe main.cpp
	@cd obj_dir; make -f Vlaber.mk; ./Vlaber

test2:
	@echo "========== Testing modelsim =========="
	@vlog laber.v nille.v
	@vcom hurz.vhd
	@vsim -c -do "run -all; exit;" work.laber

c: clean
clean:
	rm -rf work transcript obj_dir
