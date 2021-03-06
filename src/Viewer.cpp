//
// Created by HP on 06.03.2021.
//

#include "rage_core/Viewer.h"

namespace rage{

    Viewer::Viewer(ViewerType type):m_type(type) {

    }

    Viewer::~Viewer() {

    }

    void Viewer::setup() {
        if(m_type == ViewerType::texture){

        }

        if(m_type == ViewerType::model){

        }

    }

    void Viewer::run() {
        while (true){
            update();
            render();
        }
    }

    void Viewer::update() {

    }

    void Viewer::render() {

        if(m_type == ViewerType::texture){

        }

        if(m_type == ViewerType::model){

        }

    }
}