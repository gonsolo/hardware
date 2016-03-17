#pragma once

class type_info; // Clang bug
#include <ostream>
#include "vec3.h"

namespace gonzo {

	template<typename T>
	class BBox {
	public:
		T lower, upper;
	public:
		BBox() {}
		BBox(const T& lower, const T& upper) : lower(lower), upper(upper) {}
	public:
		const BBox& extend(const BBox& other) { lower = min(lower, other.lower); upper = max(upper, other.upper); return *this; }
	};

	template<typename T> std::ostream& operator<<(std::ostream& out, const BBox<T>& box) {
		return out << "[" << box.lower << "; " << box.upper << "]";
	}
	template<typename T> bool operator!=(const BBox<T>& a, const BBox<T>& b) { return a.lower != b.lower || a.upper != b.upper; }

	typedef BBox<Vec3fa> BBox3fa;
}
