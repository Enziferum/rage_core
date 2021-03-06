//
// Created by HP on 06.03.2021.
//

#pragma once

#include <vector>

#include "Window.h"
#include "Camera.h"
#include "Shader.h"
#include "InputManager.h"
#include "Structs.h"

namespace rage{

    enum class ViewerType{
        texture, model
    };

    class Viewer{
    public:
        Viewer(ViewerType type);
        virtual ~Viewer();


        virtual void run();
    private:
        virtual void setup();
        virtual void update();
        virtual void render();
    private:
        Window m_window;
        Camera m_camera;
        InputManager m_inputManager;

        ViewerType m_type;
    };
}