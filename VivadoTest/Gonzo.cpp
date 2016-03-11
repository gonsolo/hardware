#include "Gonzo.h"

//void Gonzo::build(int i, int* j) {
//	*j = 2 * i;
//}

void Gonzo::build(Interface& interface) {

	for(int i = 0; i < Interface::count; ++i) {
		interface.output[i] = interface.input[i] + 3;
	}
}
