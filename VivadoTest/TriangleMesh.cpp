#include "TriangleMesh.h"


namespace gonzo {

	Triangle::Triangle(uint32_t v0, uint32_t v1, uint32_t v2) {
		v[0] = v0;
		v[1] = v1;
		v[2] = v2;
	}

	Triangle::Triangle(const Triangle& other) {
		v[0] = other.v[0];
		v[1] = other.v[1];
		v[2] = other.v[2];
	}

	Triangle::Triangle(const Triangle&& other) {
		v[0] = other.v[0];
		v[1] = other.v[1];
		v[2] = other.v[2];
	}

	const Triangle& Triangle::operator=(const Triangle& other) {
		v[0] = other.v[0];
		v[1] = other.v[1];
		v[2] = other.v[2];
		return *this;
	}

	BBox3fa Triangle::bounds(VertexArray vertices) const {
		const Vec3fa v0 = vertices[v[0]];
		const Vec3fa v1 = vertices[v[1]];
		const Vec3fa v2 = vertices[v[2]];
		return BBox3fa(min(v0, v1, v2), max(v0, v1, v2));
	}

	Vec3fa Triangle::center(VertexArray vertices) const {
		const Vec3fa v0 = vertices[v[0]];
		const Vec3fa v1 = vertices[v[1]];
		const Vec3fa v2 = vertices[v[2]];
		return (v0 + v1 + v2) / 3.f;
	}
		
	TriangleMesh::TriangleMesh(const std::array<Vec3fa, 4>& v, const std::array<Triangle, 2>& t) {
		vertices[0] = v[0];
		vertices[1] = v[1];
		vertices[2] = v[2];
		vertices[3] = v[3];
		triangles[0] = t[0];
		triangles[1] = t[1];
		numTriangles = 2;
	}


	std::size_t TriangleMesh::size() const {
		return numTriangles;
	}

	const Triangle& TriangleMesh::triangle(size_t i) const {
		return triangles[i];
	}

	const Vec3fa TriangleMesh::vertex(size_t i) const {
		return vertices[i];
	}

	BBox3fa TriangleMesh::bounds(std::size_t i) const {
		const Triangle tri = triangle(i);
		const Vec3fa v0 = vertex(tri.v[0]);
		const Vec3fa v1 = vertex(tri.v[1]);
		const Vec3fa v2 = vertex(tri.v[2]);
		return BBox3fa(min(v0, v1, v2), max(v0, v1, v2));
	}
	
	int TriangleMesh::numTriangles;
	Triangle TriangleMesh::triangles[2];
	Vec3fa TriangleMesh::vertices[4]; 
}