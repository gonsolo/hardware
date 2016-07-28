#include <iostream>

#include "Gonzo.h"
#include "Hardware.h"
#include "Interface.h"
#include "Software.h"
#include "TriangleMesh.h"

using std::cout;
const char newline = '\n';
//const char space = ' ';

using namespace gonzo;

TriangleArray triangles;
VertexArray vertices;
BBox3fa boxHW;
BBox3fa boxSW;

bool test() {

	vertices[0] = Vec3fa(0.f, 0.f, 0.f);
	vertices[1] = Vec3fa(1.f, 0.f, 0.f);
	vertices[2] = Vec3fa(1.f, 1.f, 0.f);
	vertices[3] = Vec3fa(1.f, 1.f, 1.f);

	triangles[0] = Triangle(0, 1, 2);
	triangles[1] = Triangle(0, 1, 3);
	uint64_t numTriangles = 2;

	testGonzoHardware(triangles, numTriangles, vertices, boxHW);
	float f = vertices[0].x;

	testGonzoSoftware(triangles, numTriangles, vertices, boxSW);

	cout << boxHW	<< " == " << boxSW << " ?" << newline;
	bool pass = true;
	if (boxSW != boxHW) pass = false;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
