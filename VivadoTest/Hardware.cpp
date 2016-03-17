#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"

BBox testGonzoHardware(TriangleMesh mesh) {
	Gonzo gonzo;
	BBox box = gonzo.build(mesh);
	return box;
}

