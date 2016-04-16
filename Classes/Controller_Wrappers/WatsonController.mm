//
//  SherlockControllerWrapper.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//


#import "WatsonController.h"
#import "Sherlock_Controller_Base.hpp"
#import "WatsonImageTranscriber.h"

#pragma mark -
#pragma mark Private Interface with C++

@interface WatsonController ()
@property (nonatomic, readonly) Sherlock_Controller* Sherlock;
@property (nonatomic, strong) WatsonImageTranscriber* WatsonTranscriber;
@end

#pragma mark -
#pragma mark Controller Wrapper Implementation

@implementation WatsonController
- (void) initPlugin {
}

#pragma mark Controller Wrapper Properties -- Setters/Getters
@synthesize Sherlock = _Sherlock;
- (Sherlock_Controller*) Sherlock {
    if (!_Sherlock) {
        _Sherlock = new Sherlock_Controller();
    }
    return _Sherlock;
}

@synthesize currentImage = _currentImage;
- (NSArray*) currentImage {
    if (!_currentImage && viewerController) {
        _currentImage = [[viewerController imageView] dcmPixList];
    }
    return _currentImage;
}

@synthesize WatsonTranscriber = _WatsonTranscriber;
- (WatsonImageTranscriber*) WatsonTranscriber {
    if (!_WatsonTranscriber && _currentImage != nil) {
        _WatsonTranscriber = [[WatsonImageTranscriber alloc] initWithImageStack:self.currentImage];
    }
    else if (!_WatsonTranscriber) {
        _WatsonTranscriber = [[WatsonImageTranscriber alloc] init];
    }
    return _WatsonTranscriber;
}

#pragma mark Controller Wrapper -- Instance Methods

- (long) filterImage:(NSString*) menuName {
    if (self.currentImage) {
        printf("Size of float: %lu\nSize of floatPtr:%lu",sizeof(float), sizeof(float*));
        self.WatsonTranscriber;
    }
    
    NSAlert *myAlert=[NSAlert alertWithMessageText:@"The number of slices"
                                     defaultButton:@"Hello"
                                   alternateButton:nil
                                       otherButton:nil
                         informativeTextWithFormat:@"Words"];
    [myAlert runModal];
    return 0;
}

#pragma mark -
#pragma mark Cleanup

- (void) dealloc {
    [super dealloc];
    delete _Sherlock;
}

@end