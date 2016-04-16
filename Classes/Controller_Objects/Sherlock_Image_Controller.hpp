//
//  Sherlock_Image_Controller.hpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#ifndef Sherlock_Image_Controller_hpp
#define Sherlock_Image_Controller_hpp

#include "Sherlock_Image.hpp"
#include "Sherlock_Controller_Base.hpp"

class Sherlock_Image_Controller: Sherlock_Controller {
    std::vector<Sherlock_Image*> imageList;
    bool isImageController = true;
    
public:
    Sherlock_Image_Controller();
    Sherlock_Image_Controller(long slices, long height, long width, bool isUniform);
    ~Sherlock_Image_Controller(void);
    
    void addImage(float*);
    void addPixelsToImage (float*);
    Sherlock_Image* last_Image_Object(void);
    void delete_Last_Image (void);
};

#endif /* Sherlock_Image_Controller_hpp */
