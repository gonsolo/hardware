#include <iostream>
#include "bla.h"
#include "Gonzo.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

bool test() {

	//EightInts input = {0, 1, 2, 3, 4, 5, 6, 7};
	//EightInts result = {0, 0, 0, 0, 0, 0, 0, 0};
	int i = 3;
	int j = 0;
	//Interface interface(input, result);

	//testGonzo(interface);
	testGonzo(i, &j);
	
	int softj = 0;
	Gonzo softGonzo;
	softGonzo.build(i, &softj);

	bool pass = false;
	if(j == softj)
		pass = true;
	else
		pass = false;

	//cout << "Gonzo Testbench result: ";
	//for(const auto& x : result) {
	//	cout << x << space;
	//}
	//cout << j;
	//cout << newline;
	return pass;
}

int main() {
	return test() ? 0 : 1;
}
