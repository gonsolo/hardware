#include "BBox.h"
#include "Software.h"
#include "Gonzo.h"

BBox testGonzoSoftware(TriangleMesh mesh) {
	Gonzo gonzo;
	BBox box = gonzo.build(mesh);
	return box;
}

