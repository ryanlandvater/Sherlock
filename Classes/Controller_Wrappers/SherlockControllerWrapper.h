//
//  SherlockControllerWrapper.h
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//

#ifndef SherlockControllerWrapper_h
#define SherlockControllerWrapper_h

#import <Foundation/Foundation.h>

@interface SherlockController : NSObject
@property (nonatomic, copy) NSString* string;

- (instancetype) initWithString: (NSString*) string;
@end

#endif /* SherlockControllerWrapper_h */
