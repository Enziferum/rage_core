//
// Created by HP on 06.03.2021.
//

#pragma once

#include "IScene.h"

namespace rage{
    class BaseViewer{
    public:
        BaseViewer();
        ~BaseViewer();

        virtual void run();
    private:
        virtual void update();
        virtual void render();

    private:
        IScene::Ptr m_scene;
    };
}