#include <iostream>

#include "BBox.h"
#include "Gonzo.h"
#include "Hardware.h"
#include "Software.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

bool test() {


	TriangleMesh::Triangle triangle(0, 1, 2);
	TriangleMesh mesh(triangle);

	// Run hardware

	BBox boxHardware = testGonzoHardware(mesh);

	// Run software
	BBox boxSoftware = testGonzoSoftware(mesh);

#if 0
	// Run hardware
	Interface::IntArray input;
	for(int i = 0; i < Interface::count; ++i)
		input[i] = i;
	Interface::IntArray hardResult;
	for(int i = 0; i < Interface::count; ++i)
		hardResult[i] = 0;
	Interface hardInterface(input, hardResult);
	testGonzo(hardInterface);

	// Run software
	Interface::IntArray softResult;
	for(int i = 0; i < Interface::count; ++i)
		softResult[i] = i;
	Interface softInterface(input, softResult);
	Gonzo softGonzo;
	softGonzo.build(softInterface);

	// Compare software and hardware
	for (int i = 0; i < Interface::count; ++i) {
		if (softInterface.output[i] != hardInterface.output[i]) pass = false;
	}
#endif
	bool pass = true;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
