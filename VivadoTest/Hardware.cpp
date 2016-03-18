#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"
#include "Interface.h"
#include "TriangleMesh.h"



void testGonzoHardware(gonzo::TriangleArray triangles, uint64_t numTriangles, gonzo::VertexArray vertices, gonzo::BBox3fa& box) {

	gonzo::Gonzo gonzo;
	gonzo.build(triangles, numTriangles, vertices, box);
}
