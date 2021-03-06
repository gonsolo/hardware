#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"
#include "Interface.h"
#include "TriangleMesh.h"



void testGonzoHardware(uint64_t numTriangles, gonzo::TriangleArray triangles, uint64_t numVertices, gonzo::VertexArray vertices, gonzo::BBox3fa& box) {

	gonzo::Gonzo gonzo;
	gonzo.build(numTriangles, triangles, numVertices, vertices, box);
}
