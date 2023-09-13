#include "MacOSApplication.h"

#include <Cocoa/Cocoa.h>

namespace ACB{
    MacOSApplication::MacOSApplication(){
        m_application = (__bridge void*)[NSApplication sharedApplication];
    }

    MacOSApplication::~MacOSApplication(){

    }

    void MacOSApplication::run(){
        NSApplication* app = (__bridge NSApplication*)m_application;
        [app run];
    }
}
