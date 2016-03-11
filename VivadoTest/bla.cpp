#include "bla.h"
#include "Gonzo.h"

//void testGonzo(Interface& interface) {
//	Gonzo gonzo;
//	gonzo.build(interface);
//}

void testGonzo(int i, int* j) {
	Gonzo gonzo;
	gonzo.build(i, j);
}

//void Gonzo::build(Interface& interface) {

//	for(int i = 0; i < count; ++i) {
//		interface.output[i] = interface.input[i] + 3;
//	}
//}
