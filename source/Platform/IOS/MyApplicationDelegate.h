#pragma once

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//#include "Application.h"

//class Application;
@interface MyApplicationDelegate : UIResponder <UIApplicationDelegate>
{
    //Application* m_application;
    CADisplayLink* m_displayLink;
}
- (void)runApplication;
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey,id> *)launchOptions;

@end
