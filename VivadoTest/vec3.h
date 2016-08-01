#pragma once

#include <ostream>
#include "Math.h"

namespace gonzo {
	class Vec3fa {
	public:
		float x, y, z;
	public:
		inline Vec3fa() : x(0), y(0), z(0) {}
		inline Vec3fa(const float& x, const float& y, const float& z) : x(x), y(y), z(z) {}
	public:
		Vec3fa& operator/=(float rhs) {
			x /= rhs;
			y /= rhs;
			z /= rhs;
			return *this;
		}
		Vec3fa& operator+=(const Vec3fa& rhs) {
			x += rhs.x;
			y += rhs.y;
			z += rhs.z;
			return *this;
		}
		friend Vec3fa operator/(Vec3fa lhs, float rhs) {
			lhs /= rhs;
			return lhs;
		}
		friend Vec3fa operator+(Vec3fa lhs, const Vec3fa& rhs) {
			lhs += rhs;
			return lhs;
		}
	};

	inline Vec3fa min(const Vec3fa& a, const Vec3fa& b) { return Vec3fa(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z)); }
	inline Vec3fa max(const Vec3fa& a, const Vec3fa& b) { return Vec3fa(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z)); }

	inline std::ostream& operator<<(std::ostream& out, const Vec3fa& a) {
		return out << "(" << a.x << ", " << a.y << ", " << a.z << ")";
	}
	inline bool operator!=(const Vec3fa a, const Vec3fa b) { return a.x != b.x || a.y != b.y || a.z != b.z; }

	const int maxVertices = 1024 * 1024;
	typedef Vec3fa VertexArray[gonzo::maxVertices];
}
