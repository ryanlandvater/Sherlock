//
//  WatsonMainWindowController.m
//  Sherlock
//
//  Created by Ryan Landvater on 5/20/16.
//
//

#import "WatsonMainWindowController.h"
#import "Sherlock_Main_Controller.hpp"

@interface watsonMainWindowController ()
@end

@implementation watsonMainWindowController

- (void)windowDidLoad {
    [super windowDidLoad];
    // Implement this method to handle any initialization after your window controller's window has been loaded from its nib file.
}
- (IBAction)loadImageButtonPressed:(id)sender {
    printf("ButtonPressed\n");
}

- (void) setCurrentImage:(NSArray *)currentImage {_currentImage = currentImage;}

@end
