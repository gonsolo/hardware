#if 1
#include "BBox.h"
#include "TriangleMesh.h"
#include "Gonzo.h"

namespace gonzo {

BBox3fa Gonzo::build(const TriangleMesh& mesh) {

		// Compute scene bounds
		//const size_t numPrimitives = mesh.size();

		int i = 0;
		//BBox3fa box = mesh.bounds(i);
		BBox3fa box;
		return box;
	}
}
#else
#include "Gonzo.h"
namespace gonzo {
	int Gonzo::build(int i) {
		return i;
	}
}
#endif
