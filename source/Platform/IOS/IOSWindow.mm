#include "IOSWindow.h"

#import <UIKit/UIKit.h>

namespace ACB{
    IOSWindow::IOSWindow()
    {
        @autoreleasepool {
            UIWindow* window = [[UIWindow alloc]initWithFrame:[[UIScreen mainScreen]bounds]];
            //window.backgroundColor = [UIColor whiteColor];
            
            UIViewController* rootController = [[UIViewController alloc]init];
            //window.rootViewController = rootController;
            [window makeKeyAndVisible];
            window.hidden = false;
            UIView* view = [[UIView alloc]initWithFrame:CGRectMake(200, 200, 200, 200)];
            view.backgroundColor = [UIColor yellowColor];
            [window addSubview:view];
            m_window = (__bridge_retained void*)window;
            m_controller = (__bridge_retained void*)rootController;
            window.rootViewController = rootController;
        }
    }

    IOSWindow::~IOSWindow()
    {
        
    }
}
