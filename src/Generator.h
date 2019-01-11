#pragma once

#include <glm/glm.hpp>
#include <vector>
#include "Loader.h"
#include "Mesh.h"
#include "Material.h"

namespace terrain {
	using namespace glm;
	using namespace std;
	class Generator {
	public:
		static graphics::Mesh* flatChunk(int size = 16, int maxVertices = 64);
	};
}

