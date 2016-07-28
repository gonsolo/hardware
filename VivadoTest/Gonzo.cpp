#include <iostream>

#include "Debug.h"
#include "BBox.h"
#include "TriangleMesh.h"
#include "Gonzo.h"

namespace gonzo {

void Gonzo::build(uint64_t numTriangles, TriangleArray triangles, uint64_t numVertices, VertexArray vertices, BBox3fa& box) {

		// Compute scene bounds
		for (uint64_t i = 0; i < numTriangles; ++i) {
			box.extend(triangles[i].bounds(vertices));
		}

		// Compute morton codes
		cout << "Triangles: " << numTriangles << newline;
		cout << "Vertices:  " << numVertices << newline;
	}
}

