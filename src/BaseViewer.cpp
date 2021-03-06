//
// Created by HP on 06.03.2021.
//

#include "rage_core/BaseViewer.h"

namespace rage{

    BaseViewer::BaseViewer() {
    }

    BaseViewer::~BaseViewer() {
    }

    void BaseViewer::run() {
        m_scene->setup();
        while (true){
            update();
            render();
        }
    }

    void BaseViewer::update() {
        float dt;
        m_scene->update(dt);
    }

    void BaseViewer::render() {
        m_scene->render();
    }
}