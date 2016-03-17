//#include "BBox.h"
//#include "TriangleMesh.h"
//#include "Gonzo.h"
#include "Gonzo.h"

namespace gonzo {

#if 0
BBox3fa Gonzo::build(TriangleMesh mesh) {

		// Compute scene bounds
		const size_t numPrimitives = mesh.size();

		int i = 0;
		//BBox3fa box = mesh.bounds(i);
		BBox3fa box;
		box.lower.x = 0.f;
		return box;
	}
#endif

	int Gonzo::build(int i) {
		return i;
	}
}
