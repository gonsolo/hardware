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
BBox3fa box;

bool test() {

#if 0
	Interface interface;
	interface.x[0][0] = 13;
	std::array<Vec3fa, 4> vertices = {
		Vec3fa(0.f, 0.f, 0.f),
		Vec3fa(1.f, 0.f, 0.f),
		Vec3fa(1.f, 1.f, 0.f),
		Vec3fa(1.f, 1.f, 1.f)
	};
	std::array<Triangle, 2> triangles = {
		Triangle(0, 1, 2),
		Triangle(0, 1, 3)
	};

	interface.mesh = TriangleMesh(vertices, triangles);
#endif
	vertices[0] = Vec3fa(13.f, 13.f, 13.f);
	testGonzoHardware(triangles, vertices, box);
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
