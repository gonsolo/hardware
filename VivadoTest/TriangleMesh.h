#pragma once

#include <cstddef>
#include <cstdint>
class type_info; // Clang bug
#include <array>

#include "BBox.h"
#include "Math.h"

namespace gonzo {

	class TriangleMesh {
	private:
		static const int N = 32;
	public:
		class Triangle {

		public:
			Triangle() {}
			Triangle(uint32_t v0, uint32_t v1, uint32_t v2) {
				v[0] = v0;
				v[1] = v1;
				v[2] = v2;
			}
			~Triangle() {}

		public:
			std::uint32_t v[3];
		};

	public:
		TriangleMesh() {}
		TriangleMesh(const std::array<Vec3fa, 4>& v, const std::array<Triangle, 2>& t) {
			vertices[0] = v[0];
			vertices[1] = v[1];
			vertices[2] = v[2];
			vertices[3] = v[3];
			triangles[0] = t[0];
			triangles[1] = t[1];
			numTriangles = 2;
		}
	public:
		std::size_t size() const {
			// Vivado bug. See further down. return triangles.size();
			return numTriangles;
		}

		const Triangle& triangle(size_t i) const {
			return triangles[i];
		}

		const Vec3fa vertex(size_t i) const {
			return vertices[i];
		}
		BBox3fa bounds(std::size_t i) const {
			const Triangle& tri = triangle(i);
			const Vec3fa v0 = vertex(tri.v[0]);
			const Vec3fa v1 = vertex(tri.v[1]);
			const Vec3fa v2 = vertex(tri.v[2]);
			return BBox3fa(min(v0, v1, v2), max(v0, v1, v2));
		}
	public:
		// Vivado bug!
		//std::array<Triangle, 32> triangles;
		//std::array<Vec3fa, 32> vertices;
		int numTriangles;
		Triangle triangles[N];
		Vec3fa vertices[N]; 
	};
}
