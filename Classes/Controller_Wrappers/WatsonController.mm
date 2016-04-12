//
//  WatsonController.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/12/16.
//
//

#import "WatsonController.h"
#import "Sherlock_Controller_Base.hpp"

@interface WatsonController ()
@property (nonatomic, readonly) Sherlock_Controller* Sherlock;
@end

@implementation WatsonController

#pragma mark -
#pragma mark Plugin Initiator and Controller Methods
- (void) initPlugin {
}

- (long) filterImage:(NSString*) menuName {
    self.Sherlock->setString("TestString");
    NSAlert* testAlert = [NSAlert alertWithMessageText:@(self.Sherlock->getString())
                                         defaultButton:@"Hello"
                                       alternateButton:nil
                                           otherButton:nil
                             informativeTextWithFormat:@":-)"];
    [testAlert runModal];
    return 0;
}

@synthesize Sherlock = _Sherlock;
// Lazy Instantiation of Sherlock C++ Controller
- (Sherlock_Controller*) Sherlock {
    if (!_Sherlock) {
        _Sherlock = new Sherlock_Controller();
    }
    return _Sherlock;
}

@end