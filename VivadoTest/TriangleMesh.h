#pragma once

#include <cstddef>
#include <cstdint>
class type_info; // Clang bug
#include <array>

#include "BBox.h"
#include "Math.h"

namespace gonzo {

	class TriangleMesh {

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
		TriangleMesh(const std::array<Vec3fa, 3>& v, const Triangle& triangle) {
			vertices[0] = v[0];
			vertices[1] = v[1];
			vertices[2] = v[2];
			triangles[0] = triangle;
		}
	public:
		std::size_t size() const {
			return triangles.size();
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
		std::array<Triangle, 32> triangles;
		std::array<Vec3fa, 32> vertices;
	};
}
