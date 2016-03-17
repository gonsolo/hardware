#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"

#if 1
void testGonzoHardware(gonzo::BBox3fa& box, const gonzo::TriangleMesh& mesh) {
	gonzo::Gonzo gonzo;
	box = gonzo.build(mesh);
}
#else
void testGonzoHardware(int& i, int j) {
	gonzo::Gonzo gonzo;
	i = gonzo.build(j);
}
#endif
