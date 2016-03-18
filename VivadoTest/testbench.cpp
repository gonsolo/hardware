#include <iostream>

#include "Gonzo.h"
#include "Hardware.h"
#include "Interface.h"
#include "Software.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

using namespace gonzo;

int x[1024 * 1024];

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
	x[0] = 13;
	testGonzoHardware(x);
	int i = x[0];
#if 0
	// Run software
	testGonzoSoftware(interface);

	cout << interface.boxHW	<< " == " << interface.boxSW << " ?" << newline;
#endif
	bool pass = true;
	//if (interface.boxSW != interface.boxHW) pass = false;
	cout << "i: " << i << newline;
	if (i != 169) pass = false;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
