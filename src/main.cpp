//
// Created by HP on 06.03.2021.
//

#include "rage_core/Viewer.h"
#include "callbacks/ViewerCallbacks.h"

int main(){
    rage::Viewer viewer(rage::ViewerType::texture);

    try{
        viewer.run();
    }
    catch (...){

    }
    return 0;
}