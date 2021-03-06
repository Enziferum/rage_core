//
// Created by HP on 06.03.2021.
//

#pragma once
#include <memory>

#include "Camera.h"
#include "InputManager.h"
#include "Shader.h"
#include "Window.h"


namespace rage{
    class IScene{
    public:
        using Ptr = std::shared_ptr<IScene>;
    public:
        IScene();
        virtual ~IScene() = 0;

        virtual void setup() = 0;
        virtual void update(float dt) = 0;
        virtual void render() = 0;

    protected:
    };
}