#include <array>
#include <iostream>
#include "bla.h"

using std::cout;
const char newline = '\n';
const char space = ' ';

void gonzomain(std::array<int, count>& output, const std::array<int, count> input );

void test() {

	std::array<int, count> input;
	for(int i = 0; i < count; ++i) {
		input[i] = i;
	}
	std::array<int, count> result;

	gonzomain(result, input);

	cout << "Gonzo Testbench result: ";
	for(int i = 0; i < count; ++i) {
		cout << result[i] << space;
	}
	cout << newline;
}

int main() {
	test();
}
