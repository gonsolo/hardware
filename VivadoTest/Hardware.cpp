#include "BBox.h"
#include "Hardware.h"
#include "Gonzo.h"
#include "Interface.h"
#include "TriangleMesh.h"

void testGonzoHardware(gonzo::TriangleArray triangles, gonzo::VertexArray vertices, gonzo::BBox3fa& box) {
#if 0
	gonzo::Gonzo gonzo;
	gonzo.build(interface.boxHW, interface.mesh);
#endif
	vertices[0].x = vertices[0].x * vertices[0].x;
}
