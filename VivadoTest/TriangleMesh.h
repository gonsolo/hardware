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
		Triangle(const Triangle& other);
		Triangle(const Triangle&& other);
		~Triangle() {}

	public:

		BBox3fa bounds(VertexArray vertices) const;

	public:

		const Triangle& operator=(const Triangle& other);

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
		static int numTriangles;
		static Triangle triangles[2];
		static Vec3fa vertices[4]; 
	};

	const int maxTriangles = 1024 * 1024;
	typedef Triangle TriangleArray[gonzo::maxTriangles];
}
