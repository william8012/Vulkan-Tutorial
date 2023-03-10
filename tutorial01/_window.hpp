#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include<string>
namespace VT {
    class vtWindow
    {
        public:
            vtWindow(int w, int h, std::string name);
            ~vtWindow();
            bool shouldClose() { return glfwWindowShouldClose(window); }

            vtWindow(const vtWindow &) = delete;
            vtWindow &operator=(const vtWindow &) = delete;

        private:
            void initWindow();
            const int width;
            const int height;

            std::string windowName;
            GLFWwindow *window;
    };
}