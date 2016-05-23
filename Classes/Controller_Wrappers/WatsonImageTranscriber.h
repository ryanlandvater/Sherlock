//
//  WatsonImageController.h
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#ifndef WatsonImageController_h
#define WatsonImageController_h

//#import "WatsonController.h"
#import "Sherlock_Image_Controller.hpp"
#import <OsiriXAPI/PluginFilter.h>

@interface WatsonImageTranscriber : NSObject
- (id) initWithImageStack:(NSArray*) currentImage;
- (int) findImageDimensions: (NSArray*) currentImage
                 withSlices:(long&)slices
                 withHeight:(long&)height
                  withWidth:(long&)width
                  isUniform:(BOOL&) flagNonUniform;
- (int) addImageStack: (NSArray*) currentImage;
- (int) addPixelsToImage: (NSArray*) image;
- (Sherlock_Image_Controller*) returnSherlockImageController;
@end

#endif /* WatsonImageController_h */
