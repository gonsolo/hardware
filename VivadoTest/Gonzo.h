#pragma once

#include "BBox.h"
#include "TriangleMesh.h"

namespace gonzo {

	class Gonzo {
	public:
		void build(BBox3fa& box, const TriangleMesh& mesh);
	};
}