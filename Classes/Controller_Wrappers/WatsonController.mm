//
//  SherlockControllerWrapper.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//


#import "WatsonController.h"
#import "Sherlock_Controller_Base.hpp"

#pragma mark -
#pragma mark Private Interface with C++

@interface WatsonController ()
@property (nonatomic, readonly) Sherlock_Controller* Sherlock;
@end

#pragma mark -
#pragma mark Controller Wrapper Implementation

@implementation WatsonController
- (void) initPlugin {
    
}

- (long) filterImage:(NSString*) menuName {
    NSArray *Pixarray = [[viewerController imageView] dcmPixList];
    NSString *counter = [NSString stringWithFormat:@"%lu", (unsigned long)[Pixarray count]];
    self.Sherlock->setString([counter UTF8String]);
    NSString* textToDisplay = @(self.Sherlock->getString());
    
    NSAlert *myAlert=[NSAlert alertWithMessageText:@"The number of slices"
                                     defaultButton:@"Hello"
                                   alternateButton:nil
                                       otherButton:nil
                         informativeTextWithFormat:textToDisplay];
    [myAlert runModal];
    return 0;
}

@synthesize Sherlock = _Sherlock;
- (Sherlock_Controller*) Sherlock {
    if (!_Sherlock) {
        _Sherlock = new Sherlock_Controller();
    }
    return _Sherlock;
}

#pragma mark -
#pragma mark Cleanup

- (void) dealloc {
    [super dealloc];
    delete _Sherlock;
}

@end