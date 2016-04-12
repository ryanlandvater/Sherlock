//
//  WatsonController.h
//  Sherlock
//
//  Created by Ryan Landvater on 4/12/16.
//
//

#ifndef WatsonController_h
#define WatsonController_h
#import <Foundation/Foundation.h>
#import <OsiriXAPI/PluginFilter.h>

@interface WatsonController : PluginFilter

- (long) filterImage:(NSString*) menuName;

@end

#endif /* WatsonController_h */
