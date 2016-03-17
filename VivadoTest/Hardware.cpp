#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"

#if 0
void testGonzoHardware(gonzo::BBox3fa& box, gonzo::TriangleMesh mesh) {
	gonzo::Gonzo gonzo;
	box = gonzo.build(mesh);
}
#endif

void testGonzoHardware(int& i, int j) {
	gonzo::Gonzo gonzo;
	i = gonzo.build(j);
}
