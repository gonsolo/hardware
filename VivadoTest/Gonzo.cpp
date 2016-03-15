#include "Gonzo.h"

int dosomething(int input) {
	return input + 3;
}

void Gonzo::build(Interface& interface) {

#pragma HLS unroll
	for(int i = 0; i < Interface::count; i +=8) {
		interface.output[i] = dosomething(interface.input[i]);
	}
}
