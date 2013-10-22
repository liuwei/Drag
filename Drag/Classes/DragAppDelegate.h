/**
 *  DragAppDelegate.h
 *  Drag
 *
 *  Created by vincent liu on 13-10-22.
 *  Copyright vincent liu 2013年. All rights reserved.
 */

#import <UIKit/UIKit.h>
#import "CC3UIViewController.h"

@interface DragAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow* _window;
	CC3DeviceCameraOverlayUIViewController* _viewController;
}
@end
