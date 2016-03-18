#pragma once

#include "BBox.h"
#include "TriangleMesh.h"

namespace gonzo {

	class Gonzo {
	public:
		void build(TriangleArray triangles, uint64_t numTriangles, VertexArray vertices, BBox3fa& box);
	};
}