#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"

void testGonzoHardware(gonzo::BBox3fa& box, const gonzo::TriangleMesh& mesh) {
	gonzo::Gonzo gonzo;
	box = gonzo.build(mesh);
}
