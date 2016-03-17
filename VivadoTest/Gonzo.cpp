#include "BBox.h"
#include "TriangleMesh.h"
#include "Gonzo.h"

namespace gonzo {

BBox3fa Gonzo::build(const TriangleMesh& mesh) {

		// Compute scene bounds
		const size_t numPrimitives = mesh.size();

		BBox3fa box;
		for (size_t i = 0; i < numPrimitives; ++i) {
			box.extend(mesh.bounds(i));
		}
		return box;
	}
}

