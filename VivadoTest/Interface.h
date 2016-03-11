#pragma once

#include <array>

class Interface {
public:
	static const int count = 8;
	typedef std::array<int, count> EightInts;
public:
	Interface(const EightInts& in, const EightInts& out) : input(in), output(out) {}
	~Interface() {}
public:
	EightInts input;
	EightInts output;
};
