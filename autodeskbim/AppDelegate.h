//
//  AppDelegate.h
//  autodeskbim
//
//  Created by Evan Buxton on 5/5/15.
//  Copyright (c) 2015 Evan Buxton. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Reachability;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    BOOL internetActive;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) Reachability* internetReachable;
@property (nonatomic, retain) Reachability* hostReachable;
@property (nonatomic, retain) NSString *isWirelessAvailable;

@end

