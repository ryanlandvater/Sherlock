//
//  SherlockFilter.h
//  Sherlock
//
//  Copyright (c) 2016 Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OsiriXAPI/PluginFilter.h>
#import "SherlockControllerWrapper.h"

@interface SherlockFilter : PluginFilter {

}
@property (strong, nonatomic) SherlockController* SherlockControllerObj;
- (long) filterImage:(NSString*) menuName;

@end
