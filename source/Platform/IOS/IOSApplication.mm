#include "IOSApplication.h"

#import <UIKit/UIKit.h>

#include "MyApplicationDelegate.h"

namespace ACB{
    IOSApplication::IOSApplication()
    {
        @autoreleasepool {
            m_application = (__bridge void*)[UIApplication sharedApplication];
        }
    }

    IOSApplication::~IOSApplication(){
    
    }

    void IOSApplication::run(){
        UIApplication* uiApplication = (__bridge UIApplication*)(m_application);
        //uiApplication->run();
        //UIApplicationMain(0, nullptr, @"", @"");//todo:fix me
        //NSLog(@"早上好");
        //UIWindow* uiWindow = (__bridge UIWindow*)(m_window);
        
    }

    int32_t IOSEntryPoint(int argc, char* argv[])
    {
        @autoreleasepool {
            return UIApplicationMain(argc, argv, nil, NSStringFromClass([MyApplicationDelegate class]));
        }
    }
}
