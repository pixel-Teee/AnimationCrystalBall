#include "Window.h"

#if WIN32
    #include "Platform/Win32/Win32Window.h"
#elif APPLE
    #include "Platform/macOS/MacOSWindow.h"
#endif

namespace ACB{
    Window::Window(){
    
    }

    Window::~Window(){
    
    }
}
