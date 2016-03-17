#pragma once

#include <cstddef>
#include <cstdint>
class type_info; // Clang bug
#include <array>

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
	TriangleMesh(const Triangle& triangle) {
		triangles[0] = triangle;
	}
public:
	std::size_t size() const {
		return triangles.size();
	}

public:
	std::array<Triangle, 32> triangles;
};
