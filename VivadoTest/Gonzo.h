#pragma once

#include "BBox.h"
#include "TriangleMesh.h"

namespace gonzo {

	class Gonzo {
	public:
		void build(uint64_t numTriangles, TriangleArray triangles, uint64_t numVertices, VertexArray vertices, BBox3fa& box);
	};
}