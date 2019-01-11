#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <string>
#include <vector>
#include <iostream>
#include "../Window.h"
#include "Font.h"

namespace font {
	class Text {
	public:
		glm::vec2 position;
		float size;
		glm::vec3 color = glm::vec3(0.0f);
		Font* font;
		std::vector<glm::vec2> vertices, uvs;
		GLuint vao, verticesVBO, uvsVBO;
		
	private:
		std::string text;
		
	public:
		Text(Font *font, const std::string &text, const glm::vec2 &position = glm::vec3(0.0f), float size = 1.0f);
		void setText(const std::string &text);
		std::vector<Character*> getCharacters();
		
	private:
		void updateBuffer();
	};
}