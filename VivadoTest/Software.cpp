#include "BBox.h"
#include "Software.h"
#include "Gonzo.h"

gonzo::BBox3fa testGonzoSoftware(gonzo::TriangleMesh mesh) {
	gonzo::Gonzo gonzo;
	gonzo::BBox3fa box = gonzo.build(mesh);
	return box;
}
