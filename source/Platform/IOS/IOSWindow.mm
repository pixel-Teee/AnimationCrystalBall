#include "IOSWindow.h"

#import <UIKit/UIKit.h>

namespace ACB{
    IOSWindow::IOSWindow()
    {
        @autoreleasepool {
            UIWindow* window = [[UIWindow alloc]initWithFrame:[[UIScreen mainScreen]bounds]];
            
            window.backgroundColor = [UIColor whiteColor];
            
            UIViewController* rootController = [[UIViewController alloc]init];
            
            window.rootViewController = rootController;
            
            [window makeKeyAndVisible];
            
            m_window = (__bridge void*)window;
            m_controller = (__bridge void*)rootController;
        }
    }

    IOSWindow::~IOSWindow()
    {
        
    }
}
