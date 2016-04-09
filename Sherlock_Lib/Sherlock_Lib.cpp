/*
 *  Sherlock_Lib.cpp
 *  Sherlock_Lib
 *
 *  Created by Ryan Landvater on 4/9/16.
 *
 *
 */

#include <iostream>
#include "Sherlock_Lib.hpp"
#include "Sherlock_LibPriv.hpp"

void Sherlock_Lib::HelloWorld(const char * s)
{
	 Sherlock_LibPriv *theObj = new Sherlock_LibPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void Sherlock_LibPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

