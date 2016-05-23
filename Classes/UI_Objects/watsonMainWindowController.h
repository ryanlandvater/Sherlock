//
//  WatsonMainWindowController.h
//  Sherlock
//
//  Created by Ryan Landvater on 5/20/16.
//
//

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>

@interface watsonMainWindowController : NSWindowController
@property (assign) IBOutlet NSButton *loadImageButton;


@property (nonatomic ,readonly) NSArray* currentImage;
- (void) setCurrentImage:(NSArray *)currentImage;

@end
