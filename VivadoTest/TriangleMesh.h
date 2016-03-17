#pragma once

#include <cstddef>
#include <cstdint>
class type_info; // Clang bug
#include <array>

#include "BBox.h"
#include "Math.h"

namespace gonzo {

	class Triangle {

	public:
		Triangle() {}
		Triangle(uint32_t v0, uint32_t v1, uint32_t v2);
		~Triangle() {}

	public:
		std::uint32_t v[3];
	};

	class TriangleMesh {

	public:

		TriangleMesh() {}
		TriangleMesh(const std::array<Vec3fa, 4>& v, const std::array<Triangle, 2>& t);

	public:

		std::size_t size() const;

		const Triangle& triangle(size_t i) const;

		const Vec3fa vertex(size_t i) const;

		BBox3fa bounds(std::size_t i) const;
	
	public:
		int numTriangles;
		static const int N = 32;
		Triangle triangles[N];
		Vec3fa vertices[N]; 
	};
}
