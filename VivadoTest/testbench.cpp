#include <iostream>
#include "bla.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

void test() {

	EightInts input = {0, 1, 2, 3, 4, 5, 6, 7};
	EightInts result;

	gonzomain(result, input);

	cout << "Gonzo Testbench result: ";
	for(const auto& x : result) {
		cout << x << space;
	}
	cout << newline;
}

int main() {
	test();
}
