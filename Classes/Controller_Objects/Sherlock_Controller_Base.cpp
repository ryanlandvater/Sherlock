//
//  Sherlock_Controller_Base.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//

#include "Sherlock_Controller_Base.hpp"


Sherlock_Controller::Sherlock_Controller (){
    
}

Sherlock_Controller::Sherlock_Controller (const char* string) {
    setString(string);
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

char* Sherlock_Controller::getString(){return string_;}
bool Sherlock_Controller::isMainController(){return isMainController_;}
void Sherlock_Controller::setMainController(){isMainController_=true;}
bool Sherlock_Controller::isImageController(){return isImageController_;}
void Sherlock_Controller::setImageController(){isImageController_=true;}
bool Sherlock_Controller::isProcessingController() {return isProcessingController_;}
void Sherlock_Controller::setProcessingController(){isProcessingController_=true;}

