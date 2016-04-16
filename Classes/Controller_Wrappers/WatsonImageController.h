//
//  WatsonImageController.h
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#ifndef WatsonImageController_h
#define WatsonImageController_h

#import "WatsonController.h"

@interface WatsonImageController : WatsonController
- (id) initWithImageStack:(NSArray *) currentImage;
- (void) convertNSArrayImageToPrimative: (NSArray *) NSArrayImage;
@end

#endif /* WatsonImageController_h */
