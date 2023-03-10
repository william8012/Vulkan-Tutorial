#pragma once

#include "vt_window.hpp"
#include "vt_pipeline.hpp"
namespace VT{
    class FirstApp {

        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT =600;

            void run();

        private:
            vtWindow vtWindow{
                WIDTH, HEIGHT, "New window"
            };

            VTPipeline vtPipeline{
                "shaders/simple_shader.vert.spv",
                "shaders/simple_shader.frag.spv",
            };
    };
}