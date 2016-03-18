#include "BBox.h"
#include "Software.h"
#include "Gonzo.h"

void testGonzoSoftware(gonzo::TriangleArray triangles, int numTriangles, gonzo::VertexArray vertices, gonzo::BBox3fa& box) {

	gonzo::Gonzo gonzo;
	gonzo.build(triangles, numTriangles, vertices, box);
}
