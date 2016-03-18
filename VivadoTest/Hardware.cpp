#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"
#include "Interface.h"

//void testGonzoHardware(gonzo::Interface& interface) {
void testGonzoHardware(int x[1024 * 1024]) {
#if 0
	gonzo::Gonzo gonzo;
	gonzo.build(interface.boxHW, interface.mesh);
#endif
	x[0] = x[0] * x[0];
}
