#include <iostream>
#include "bla.h"
#include "Gonzo.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

bool test() {

	// Run hardware
	Interface::EightInts input = {0, 1, 2, 3, 4, 5, 6, 7};
	Interface::EightInts hardResult = { 0, 0, 0, 0, 0, 0, 0, 0 };
	Interface hardInterface(input, hardResult);
	testGonzo(hardInterface);

	// Run software
	Interface::EightInts softResult = { 0, 0, 0, 0, 0, 0, 0, 0 };
	Interface softInterface(input, softResult);
	Gonzo softGonzo;
	softGonzo.build(softInterface);

	// Compare software and hardware
	bool pass = true;
	for (int i = 0; i < Interface::count; ++i) {
		if (softInterface.output[i] != hardInterface.output[i]) pass = false;
	}
	cout << std::boolalpha << "pass: " << pass << newline;

	return pass;
}

int main() {
	return test() ? 0 : 1;
}
