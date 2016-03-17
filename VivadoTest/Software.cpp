#include "BBox.h"
#include "Software.h"
#include "Gonzo.h"

#if 0
gonzo::BBox3fa testGonzoSoftware(gonzo::TriangleMesh mesh) {
	gonzo::Gonzo gonzo;
	gonzo::BBox3fa box = gonzo.build(mesh);
	return box;
}
#endif
void testGonzoSoftware(int& i, int j) {
	gonzo::Gonzo gonzo;
	i = gonzo.build(j);
}
