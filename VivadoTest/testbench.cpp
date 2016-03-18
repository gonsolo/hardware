#include <iostream>

#include "Gonzo.h"
#include "Hardware.h"
#include "Interface.h"
#include "Software.h"
#include "TriangleMesh.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

using namespace gonzo;

TriangleArray triangles;
VertexArray vertices;
BBox3fa boxHW;
BBox3fa boxSW;

bool test() {

	vertices[0] = Vec3fa(13.f, 0.f, 0.f);
	vertices[1] = Vec3fa(1.f, 0.f, 0.f);
	vertices[2] = Vec3fa(1.f, 1.f, 0.f);
	vertices[3] = Vec3fa(1.f, 1.f, 1.f);

	triangles[0] = Triangle(0, 1, 2);
	triangles[0] = Triangle(0, 1, 3);

	testGonzoHardware(triangles, vertices, boxHW);
	float f = vertices[0].x;
#if 0
	// Run software
	testGonzoSoftware(interface);

	cout << interface.boxHW	<< " == " << interface.boxSW << " ?" << newline;
#endif
	bool pass = true;
	//if (interface.boxSW != interface.boxHW) pass = false;
	cout << "f: " << f << newline;
	if (f != 169.f) pass = false;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
