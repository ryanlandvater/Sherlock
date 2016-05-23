//
//  Sherlock_Main_Controller.hpp
//  Sherlock
//
//  Created by Ryan Landvater on 4/14/16.
//
//

#ifndef Sherlock_Main_Controller_hpp
#define Sherlock_Main_Controller_hpp

#include "Sherlock_Controller_Base.hpp"
#include "Sherlock_Image_Controller.hpp"

class Sherlock_Main_Controller : public Sherlock_Controller {
private:
    std::vector<Sherlock_Controller*> delegate_Controllers;
    
public:
    Sherlock_Main_Controller ();
    Sherlock_Main_Controller (Sherlock_Image_Controller*);
    ~Sherlock_Main_Controller();
    
    Sherlock_Controller* get_image_Controller (void);
    int add_Controller (Sherlock_Controller*);
    int create_Controller (char*);
    //void set_image_Controller (Sherlock_Controller* image_Controller_);
};


#endif /* Sherlock_Main_Controller_hpp */
