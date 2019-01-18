#pragma once

#ifndef __unix__
#include <GL/glew.h>
#else
#include <GL/gl.h>
#endif

#include <GLFW/glfw3.h>
#include <string>
#include <iostream>
#include "Image.h"

namespace graphics {
	class Window {
	public:
		GLFWwindow *window;
		std::string name;
		
		int width;
		int height;
		
		bool focused = true;
		
		Window(const std::string &name, int width, int height);
		~Window();
		
		bool shouldClose() const;
		
		void update();
		void swap();
		
		void setIcon(const std::string &icon);
		
	private:
		bool init();
	};
}

extern graphics::Window* window;

void focusCallback(GLFWwindow* w, int focused);
void bufferCallback(GLFWwindow* w, int width, int height);

void APIENTRY glDebugOutput(GLenum source, GLenum type, GLuint id, GLenum severity,
                            GLsizei length, const GLchar *message, const void *userParam);