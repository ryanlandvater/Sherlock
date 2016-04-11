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

class Sherlock_Controller {
#pragma mark -
#pragma mark Private Inventory
private:
    char* string_;
    
#pragma mark -
#pragma mark Public Methods
public:
    Sherlock_Controller();
    Sherlock_Controller(const char* string);
    ~Sherlock_Controller();
    
    char* getString (void);
    void setString (const char* string);

};

#endif /* Sherlock_Controller_Base_hpp */
