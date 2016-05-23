//
//  Sherlock_Image.hpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#ifndef Sherlock_Image_hpp
#define Sherlock_Image_hpp
#include <stdio.h>

class Sherlock_Image{
private:
    float* pixel_Values;
    unsigned int slices;
    unsigned int width;
    unsigned int height;
    bool is_Uniform;
    bool is_original;
    bool is_modified;
    bool is_binary;
    char* segmentation_type;
    
public:
    Sherlock_Image(); //MARK: When initialized, run analysis on the image...
    Sherlock_Image(long slices, long height, long width, bool is_Uniform);
    ~Sherlock_Image();
    
    unsigned int get_Slices (void);
    void set_Slices(unsigned int slice);
    unsigned int get_Width (void);
    void set_Width(unsigned int width);
    unsigned int get_Height (void);
    void set_Height(unsigned int height);
    void addSliceToImage (float* slice,
                          unsigned sliceNumber);
    void set_pixel_Value (float* value,
                          int index);
    float get_pixel_Value (int index);
};

#endif /* Sherlock_Image_hpp */
