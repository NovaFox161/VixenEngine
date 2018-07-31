#ifndef VIXENENGINE_LOADER_H
#define VIXENENGINE_LOADER_H

#include <stdexcept>
#include <iostream>
#include <vector>
#include <glm/glm.hpp>
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <png.h>
#include "Mesh.h"

namespace graphics::loader {
	using namespace glm;
	class Loader {
	public:
		graphics::model::Mesh loadMesh(const char *path);
		GLuint loadTexture(const char *path);
	};
}

#endif