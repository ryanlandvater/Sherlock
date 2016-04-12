//
//  SherlockControllerWrapper.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//


#import "SherlockControllerWrapper.h"
#import "Sherlock_Controller_Base.hpp"

#pragma mark -
#pragma mark Private Interface with C++

@interface SherlockController ()
@property (nonatomic, readonly) Sherlock_Controller* linkedSherlockController;
@end

#pragma mark -
#pragma mark Controller Wrapper Implementation

@implementation SherlockController

- (instancetype) initWithString:(NSString *)string_ {
    self=[super init];
    if (self != nil) {
        _linkedSherlockController = new Sherlock_Controller([string_ UTF8String]);
    }
    return self;
}

@synthesize string = _string;
-(NSString *)string {
    const char* string_ = self.linkedSherlockController->getString();
    _string = string_ ? @(string_) : nil;
    return _string;
}
- (void) setString:(NSString *)string_ {
    _string = string_;
    self.linkedSherlockController->setString([string_ UTF8String]);
}

#pragma mark -
#pragma mark Cleanup

- (void) dealloc {
    [super dealloc];
    delete _linkedSherlockController;
}

@end