#include "Vlaber.h"
#include "verilated.h"

int main(int argc, char **argv, char **env) {

	Verilated::commandArgs(argc, argv);
	Vlaber* top = new Vlaber;
	while (!Verilated::gotFinish()) { top->eval(); }
	delete top;
}

