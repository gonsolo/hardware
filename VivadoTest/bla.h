#pragma once

#if 0
#include <array>

const int count = 8;
typedef std::array<int, count> EightInts;

class Interface {
public:
	Interface(const EightInts& in, const EightInts& out) : input(in), output(out) {}
	~Interface() {}
public:
	EightInts input;
	EightInts output;
};

void testGonzo(Interface & interface);
#endif

void testGonzo(int i, int* j);


