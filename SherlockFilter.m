//
//  SherlockFilter.m
//  Sherlock
//
//  Copyright (c) 2016 Ryan. All rights reserved.
//

#import "SherlockFilter.h"

@implementation SherlockFilter

- (void) initPlugin
{
}

- (long) filterImage:(NSString*) menuName
{	ViewerController	*new2DViewer;
	
	// In this plugin, we will simply duplicate the current 2D window!
	
	new2DViewer = [self duplicateCurrent2DViewerWindow];
	
	if( new2DViewer) return 0; // No Errors
	else return -1;
    
    /*NSAlert *myAlert=[NSAlert alertWithMessageText:@"Hello World"
                                     defaultButton:@"Hello"
                                   alternateButton:nil
                                       otherButton:nil
                         informativeTextWithFormat:@":-)"];
    [myAlert runModal];
    return 0;*/
 
}

@end
