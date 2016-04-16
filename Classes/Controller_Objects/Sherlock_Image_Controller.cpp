//
//  Sherlock_Image_Controller.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#include "Sherlock_Image_Controller.hpp"

Sherlock_Image_Controller::Sherlock_Image_Controller() {
    
}

Sherlock_Image_Controller::Sherlock_Image_Controller(long slices, long height, long width, bool isUniform) {
    Sherlock_Image* new_Image = new Sherlock_Image(slices, height, width, isUniform);
    imageList.emplace_back(new_Image);
}

Sherlock_Image_Controller::~Sherlock_Image_Controller() {
    imageList.clear();
}

Sherlock_Image* Sherlock_Image_Controller::last_Image_Object() {
    if (imageList.back())
        return imageList.back();
    return nullptr;
}

void Sherlock_Image_Controller::addPixelsToImage(float *){
    
}

void Sherlock_Image_Controller::delete_Last_Image(){
    if (imageList.back()) {
        imageList.back()->~Sherlock_Image();
    }
}