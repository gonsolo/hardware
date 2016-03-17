#include <iostream>

//#include "BBox.h"
#include "Gonzo.h"
#include "Hardware.h"
#include "Software.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

using namespace gonzo;

bool test() {

	std::array<Vec3fa, 3> vertices = { Vec3fa(0.f, 0.f, 0.f), Vec3fa(1.f, 0.f, 0.f), Vec3fa(1.f, 1.f, 0.f) };
	TriangleMesh::Triangle triangle(0, 1, 2);
	TriangleMesh mesh(vertices, triangle);

	// Run hardware
	BBox3fa boxHardware;
	testGonzoHardware(boxHardware, mesh);

	// Run software
	BBox3fa boxSoftware = testGonzoSoftware(mesh);

	cout << boxHardware << newline << boxSoftware << newline;

	bool pass = true;
	if (boxHardware != boxSoftware) pass = false;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
