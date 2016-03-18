#include "BBox.h"
#include "TriangleMesh.h"
#include "Gonzo.h"

namespace gonzo {

void Gonzo::build(BBox3fa& box, const TriangleMesh& mesh) {

		// Compute scene bounds
		const size_t numPrimitives = mesh.size();

		for (size_t i = 0; i < numPrimitives; ++i) {
			box.extend(mesh.bounds(i));
		}
	}
}

