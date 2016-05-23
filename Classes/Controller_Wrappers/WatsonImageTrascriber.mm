//
//  WatsonImageController.m
//  Sherlock
//
//  Created by Ryan Landvater on 4/13/16.
//
//

#import "WatsonImageTranscriber.h"


@interface WatsonImageTranscriber ()
@property (nonatomic, readonly) Sherlock_Image_Controller* Sherlock;
@end

@implementation WatsonImageTranscriber

- (id) init {
    self = [super init];
    
    if (self != nil) {
        _Sherlock = new Sherlock_Image_Controller();
        return self; // Success -> Transcriber returned
    }
    return nil;      // Failure -> Null pointer returned
}

- (id) initWithImageStack:(NSArray *) currentImage {
    self = [super init];
    
    if (self != nil) {
        if ([self addImageStack:currentImage]) {
            return self; // Success -> Transcriber returned
        }
    }
    return nil;         // Failure -> Null pointer returned
}

- (int) addImageStack:(NSArray *)currentImage {
    // Create variables for image dimensions
    long slices, height, width;
    BOOL flagUniform = YES;
    
    if ([self findImageDimensions:currentImage
                       withSlices:slices
                       withHeight:height
                        withWidth:width
                        isUniform:flagUniform]) {
        _Sherlock = new Sherlock_Image_Controller(slices, height, width, flagUniform);
        if (_Sherlock != nil) {
            if([self addPixelsToImage:currentImage]){
                return 1;   // Success
            }
        }
    }
    return 0;               // Failure
}

- (int) findImageDimensions: (NSArray*) currentImage withSlices:(long&)slices withHeight:(long&)height withWidth:(long&)width isUniform:(BOOL&) flagUniform {
    if (currentImage != nil) {
        slices = [currentImage count];
        height = [[currentImage objectAtIndex:0] pheight];
        width = [[currentImage objectAtIndex:0] pwidth];
        
        for (unsigned z = 1; z < (unsigned)slices; z++) {
            /* We will now see if the image has different dimensions in some slices*/
            if ([[currentImage objectAtIndex:z] pheight] && [[currentImage objectAtIndex:z] pheight] < height) {
                height = [[currentImage objectAtIndex:z] pheight];
                flagUniform = NO;
            }
            if ([[currentImage objectAtIndex:z] pheight] && [[currentImage objectAtIndex:z] pwidth] < width) {
                width = [[currentImage objectAtIndex:z] pwidth];
                flagUniform = NO;
            }
        }
        return 1;   // Success
    }
    return 0;       // Failure
}

- (Sherlock_Image_Controller*) returnSherlockImageController {
    return _Sherlock;
}

- (int) addPixelsToImage: (NSArray*) image {
    Sherlock_Image* ImageObject = self.Sherlock->last_Image_Object();
    if (ImageObject != nil) {
        unsigned slices = ImageObject->get_Slices();
        for (unsigned z = 0; z < slices; z++) {
            DCMPix* CurPix = [image objectAtIndex:z];
            float* slice = [CurPix fImage];
            ImageObject->addSliceToImage(slice, z);
        }
        return 1;   //Success
    }
    return 0;       //Failure
}

- (void) dealloc {
    [super dealloc];
}

@end



// If you're not concerned about reporting a non-uniform dimensioned image, this is simpler code... LINE 70
/*height = ([[currentImage objectAtIndex:z] pheight] && [[currentImage objectAtIndex:z] pheight] < height) ? [[currentImage objectAtIndex:z] pheight] : height;
 width = ([[currentImage objectAtIndex:z] pheight] && [[currentImage objectAtIndex:z] pwidth] < width) ? [[currentImage objectAtIndex:z] pwidth] : width;*/