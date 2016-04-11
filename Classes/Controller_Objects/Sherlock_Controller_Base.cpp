//
//  Sherlock_Controller_Base.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//

#include "Sherlock_Controller_Base.hpp"


Sherlock_Controller::Sherlock_Controller (){
    std::cout<<"SherlockController_C++ Object Created" << std::endl;
}

Sherlock_Controller::Sherlock_Controller (const char* string) {
    
}

Sherlock_Controller::~Sherlock_Controller() {
    delete string_;
    std::cout << "SherlockController_C++ Object Destroyed" << std::endl;
}

void Sherlock_Controller::setString(const char *string){
    if(string_)
        free(string_);
    string_ = (char*)(string ? strdup(string) : NULL);
}

char* Sherlock_Controller::getString(void) {
    return string_;
}