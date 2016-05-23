//
//  SherlockControllerWrapper.h
//  Sherlock
//
//  Created by Ryan Landvater on 4/9/16.
//
//

#ifndef SherlockControllerWrapper_h
#define SherlockControllerWrapper_h

#import <OsiriXAPI/PluginFilter.h>
#import "watsonMainWindowController.h"

@interface watsonHorosPlugin : PluginFilter
@property (nonatomic, strong) watsonMainWindowController *mainWindowController;
@end
#endif /* SherlockControllerWrapper_h */
