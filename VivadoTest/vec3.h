#pragma once

#include <ostream>
#include "Math.h"

namespace gonzo {

	template<typename T> class Vec3 {
	public:
		T x, y, z;
	public:
		Vec3() {}
		Vec3(const T& x, const T& y, const T& z) : x(x), y(y), z(z) {}
	};

	template<typename T> Vec3<T> min(const Vec3<T>& a, const Vec3<T>& b) { return Vec3<T>(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z)); }
	template<typename T> Vec3<T> max(const Vec3<T>& a, const Vec3<T>& b) { return Vec3<T>(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z)); }

	template<typename T> std::ostream& operator<<(std::ostream& out, const Vec3<T>& a) {
		return out << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	}
	template<typename T> bool operator!=(const Vec3<T> a, const Vec3<T> b) { return a.x != b.x || a.y != b.y || a.z != b.z; }

	typedef Vec3<float> Vec3fa;
}
