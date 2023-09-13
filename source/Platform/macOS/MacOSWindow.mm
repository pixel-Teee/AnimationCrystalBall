#include "MacOSWindow.h"

#include <Cocoa/Cocoa.h>

namespace ACB{
    MacOSWindow::MacOSWindow(){
        //@autoreleasepool {
            NSRect rect = CGRectMake(0, 0, 800, 600);
            NSUInteger style = NSWindowStyleMaskClosable | NSWindowStyleMaskTitled | NSWindowStyleMaskMiniaturizable | NSWindowStyleMaskResizable;
            NSWindow* window = [[NSWindow alloc]initWithContentRect:rect styleMask:style backing:NSBackingStoreBuffered defer:false];
            window.title = @"New Create Window";
            //show window
            [window makeKeyAndOrderFront:nil];
            //make window center
            //[window center];
            
            m_window = (__bridge void*)window;
        //}
    }

    MacOSWindow::~MacOSWindow(){
        
    }
}
