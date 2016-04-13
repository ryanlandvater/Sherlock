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
#import <OsiriXAPI/PluginFilter.h>

@interface WatsonController : PluginFilter

- (long) filterImage:(NSString*) menuName;

@end
#endif /* SherlockControllerWrapper_h */
