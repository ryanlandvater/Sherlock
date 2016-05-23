//
//  Sherlock_Main_Controller.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/14/16.
//
//

#include "Sherlock_Main_Controller.hpp"

Sherlock_Main_Controller::Sherlock_Main_Controller () {
    setMainController();
}

Sherlock_Main_Controller::Sherlock_Main_Controller(Sherlock_Image_Controller* Image_Controller){
    setMainController();
    delegate_Controllers.emplace_back(Image_Controller);
}

Sherlock_Main_Controller::~Sherlock_Main_Controller(){
    delegate_Controllers.clear();
}

Sherlock_Controller* Sherlock_Main_Controller::get_image_Controller(){
    for (unsigned i = 0; i < delegate_Controllers.size(); i++) {
        if (delegate_Controllers[i]->isImageController())
            return delegate_Controllers[i];
    }
    return nullptr;
}

int Sherlock_Main_Controller::add_Controller (Sherlock_Controller* controller) {
    delegate_Controllers.emplace_back(controller);
    if (delegate_Controllers.back() == controller) {
        return 1;   // Success
    }
    return 0;       // Failure
}

/*void Sherlock_Main_Controller::set_image_Controller(Sherlock_Controller *image_Controller_){
    delegate_Controllers.emplace_back(*image_Controller_);
}*/