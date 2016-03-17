#pragma once

#if 1
#include "BBox.h"
#include "TriangleMesh.h"

namespace gonzo {

	class Gonzo {
	public:
		BBox3fa build(TriangleMesh mesh);
	};
}
#else
namespace gonzo {
	class Gonzo {
	public:
		int build(int i);
	}
}
#endif