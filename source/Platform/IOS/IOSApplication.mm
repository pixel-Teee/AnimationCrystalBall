#include "IOSApplication.h"

#import <UIKit/UIKit.h>

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
    }
}
