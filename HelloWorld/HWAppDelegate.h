//
//  HWAppDelegate.h
//  HelloWorld
//
//  Created by Tim Novikoff on 8/31/13.
//  Copyright (c) 2013 Tim Novikoff. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HWViewController;

@interface HWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) HWViewController *viewController;

@end
