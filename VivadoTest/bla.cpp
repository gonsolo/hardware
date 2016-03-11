#include <array>
#include "bla.h"

void gonzomain(std::array<int, 8>& output, const std::array<int, count> input) {

	for(int i = 0; i < count; ++i) {
		output[i] = input[i] + 3;
	}
}
