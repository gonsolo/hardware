#include "BBox.h"
#include "Software.h"
#include "Gonzo.h"

void testGonzoSoftware(uint64_t numTriangles, gonzo::TriangleArray triangles, uint64_t numVertices, gonzo::VertexArray vertices, gonzo::BBox3fa& box) {

	gonzo::Gonzo gonzo;
	gonzo.build(numTriangles, triangles, numVertices, vertices, box);
}
