//
//  Sherlock_Main_Controller.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/14/16.
//
//

#include "Sherlock_Main_Controller.hpp"

Sherlock_Main_Controller::Sherlock_Main_Controller () {
    isMainController_ = true;
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

/*void Sherlock_Main_Controller::set_image_Controller(Sherlock_Controller *image_Controller_){
    delegate_Controllers.emplace_back(*image_Controller_);
}*/