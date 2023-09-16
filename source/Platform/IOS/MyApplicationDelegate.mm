#import "MyApplicationDelegate.h"

#include "IOSApplication.h"

std::shared_ptr<ACB::Application> g_application;

@implementation MyApplicationDelegate
-(void)runApplication
{
    g_application->run();
}
-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey,id> *)launchOptions
{
    //NSLog(@"加载完毕");
    //m_application = IOSApplication
    g_application = ACB::CreateApplication();
    
    //create ui window
    g_application->makeWindow();
    
    m_displayLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(runApplication)];
    
    //start cadisplay likn
    [m_displayLink addToRunLoop:[NSRunLoop currentRunLoop] forMode:NSDefaultRunLoopMode];
    
    return YES;
}
@end
