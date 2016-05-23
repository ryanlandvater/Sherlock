//
//  WatsonImageController.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#import "WatsonImageController.h"
#import "Sherlock_Image_Controller.hpp"


@interface WatsonImageController ()
@property (nonatomic, readonly) Sherlock_Image_Controller* Sherlock;
@end

@implementation WatsonImageController

- (id) initWithImageStack:(NSArray *) currentImage {
    self = [super init];
    
    if (self != nil) {
        _Sherlock = new Sherlock_Image_Controller([currentImage count], [[currentImage objectAtIndex:0] pheight], [[currentImage objectAtIndex:0] pwidth]);
        [self convertNSArrayImageToPrimative:currentImage];
    }
    return self;
}

- (void) convertNSArrayImageToPrimative: (NSArray *) NSArrayImage {
    DCMPix *currentSlice;
    for (unsigned z = 0; z<[NSArrayImage count]; z++) {
        //NSArrayImage contains a series of DCMPix objects,
        //each representing an image slice from the stack.
        currentSlice = [NSArrayImage objectAtIndex:z];
        for (unsigned y = 0; y < (long)[currentSlice pheight] ; y++) {
            for (unsigned x = 0; x < (long)[currentSlice pwidth]; x++) {
            }
        }
    }
}

@end