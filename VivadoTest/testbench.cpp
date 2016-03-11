#include <iostream>
#include "bla.h"
#include "Gonzo.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

bool test() {

	Interface::EightInts input = {0, 1, 2, 3, 4, 5, 6, 7};
	Interface::EightInts hardResult = {0, 0, 0, 0, 0, 0, 0, 0};
	//int i = 3;
	//int j = 0;
	Interface hardInterface(input, hardResult);
	testGonzo(hardInterface);
	//testGonzo(i, &j);
	
	int softj = 0;
	Interface::EightInts softResult = { 0, 0, 0, 0, 0, 0, 0, 0 };
	Interface softInterface(input, softResult);
	Gonzo softGonzo;
	softGonzo.build(softInterface);
	//softGonzo.build(i, &softj);

	bool pass = true;
	//if(j == softj)
	//	pass = true;
	//else
	//	pass = false;

	for (int i = 0; i < Interface::count; ++i) {
		if (softInterface.output[i] != hardInterface.output[i]) pass = false;
	}
	//cout << "Gonzo Testbench result: ";
	//for(const auto& x : result) {
	//	cout << x << space;
	//}
	//cout << j;
	//cout << newline;
	cout << std::boolalpha << "pass: " << pass << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
