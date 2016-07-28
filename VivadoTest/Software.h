#pragma once

#include "BBox.h"
#include "TriangleMesh.h"
#include "vec3.h"

void testGonzoSoftware(uint64_t numTriangles, gonzo::TriangleArray triangles, uint64_t numVertices, gonzo::VertexArray vertices, gonzo::BBox3fa& box);
