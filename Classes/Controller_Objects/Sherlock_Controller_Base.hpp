//
//  Sherlock_Controller_Base.hpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//

#ifndef Sherlock_Controller_Base_hpp
#define Sherlock_Controller_Base_hpp

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <vector>

class Sherlock_Controller {
#pragma mark -
#pragma mark Private Inventory
protected:
    char* string_;
    bool isMainController_ = false;
    bool isImageController_ = false;
    bool isProcessingController_=false;
    
#pragma mark -
#pragma mark Public Methods
public:
    Sherlock_Controller();
    Sherlock_Controller(const char* string);
    ~Sherlock_Controller();
    
    char* getString (void);
    void setString (const char* string);
    bool isImageController(void);
    bool isProcessingController(void);

};

#endif /* Sherlock_Controller_Base_hpp */
