#pragma once

#include "BBox.h"
#include "TriangleMesh.h"

class Gonzo {
public:
	BBox build(TriangleMesh mesh);
};
