#pragma once

#include "BBox.h"
#include "TriangleMesh.h"
#include "vec3.h"

void testGonzoSoftware(gonzo::TriangleArray triangles, int numTriangles, gonzo::VertexArray vertices, gonzo::BBox3fa& box);
