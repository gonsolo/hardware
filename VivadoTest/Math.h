#pragma once

namespace gonzo {
	template<typename T> T min(const T& a, const T& b, const T& c) { return min(min(a, b), c); }
	template<typename T> T max(const T& a, const T& b, const T& c) { return max(max(a, b), c); }

	inline float min(float a, float b) { return a < b ? a : b; }
	inline float max(float a, float b) { return a < b ? b : a; }

}