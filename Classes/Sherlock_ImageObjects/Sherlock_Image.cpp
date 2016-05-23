//
//  Sherlock_Image.cpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#include "Sherlock_Image.hpp"
#include <stdio.h>
#include <stdlib.h>

Sherlock_Image::Sherlock_Image(){
    
}
Sherlock_Image::Sherlock_Image(long slices_, long height_, long width_, bool is_Uniform_) {
    slices = (unsigned) slices_;
    height = (unsigned) height_;
    width = (unsigned) width_;
    is_Uniform = is_Uniform_;
    pixel_Values = new float[width*height*slices];
}

Sherlock_Image::~Sherlock_Image() {
    delete pixel_Values;
}

void Sherlock_Image::addSliceToImage (float* slice_, unsigned z_){
    for (unsigned y = 0; y < height; y++) {
        for (unsigned x = 0; x < width; x++) {
            pixel_Values[z_*width*height+y*width+x]=slice_[y*width+x];
            /*float value = slice_[y*width+x];
            float value2 = *pixel_Values[z_*width*height+y*width+x];
            printf("Value1= %f\nValue2= %f\nAddress1=%p\nAddress2= %p\n\n",value,value2,&slice_[y*width+x],pixel_Values[z_*width*height+y*width+x]);*/
        }
    }
}

void Sherlock_Image::set_pixel_Value(float* value_, int index_) {
    pixel_Values[index_] = *value_;
}

float Sherlock_Image::get_pixel_Value(int index){
    return pixel_Values[index];
}

unsigned int Sherlock_Image::get_Slices(){return slices;}
void Sherlock_Image::set_Slices(unsigned int slices_){slices=slices_;}
unsigned int Sherlock_Image::get_Height(){return height;}
void Sherlock_Image::set_Height(unsigned int height_){height=height_;}
unsigned int Sherlock_Image::get_Width(){return width;}
void Sherlock_Image::set_Width(unsigned int width_){width=width_;}
