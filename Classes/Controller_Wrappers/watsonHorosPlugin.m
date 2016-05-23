//
//  SherlockControllerWrapper.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//


#import "watsonHorosPlugin.h"

#pragma mark -
#pragma mark Private Interface with C++


#pragma mark -
#pragma mark Controller Wrapper Implementation

@implementation watsonHorosPlugin
- (void) initPlugin {
}
#pragma mark Controller Wrapper -- Instance Methods

- (long) filterImage:(NSString*) menuName {
    NSArray* currentDICOM = [[viewerController imageView] dcmPixList];
    if (currentDICOM != nil) {
        [self.mainWindowController showWindow:self.mainWindowController];
        [self.mainWindowController setCurrentImage:currentDICOM];
    } else {
        [self failedToLoadImageAlert];
    }
    return 0;
}


#pragma mark -
#pragma mark Accessory Functions
- (watsonMainWindowController*) mainWindowController {
    if (!_mainWindowController || !_mainWindowController.window) {
        _mainWindowController = nil; // If already exists, nil it.
        _mainWindowController = [[watsonMainWindowController alloc] initWithWindowNibName:@"WatsonMainWindowController"];
    }
    return _mainWindowController;
}

- (void) failedToLoadImageAlert {
    NSAlert *failureAlert=[NSAlert alertWithMessageText:@"Failed to load image"
                                          defaultButton:@"Close"
                                        alternateButton:nil
                                            otherButton:nil
                              informativeTextWithFormat:@"The DICOM Image failed to load into the plugin"];
    [failureAlert runModal];
}

#pragma mark -
#pragma mark Cleanup

- (void) dealloc {
    [super dealloc];
}

@end