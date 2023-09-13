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

    std::shared_ptr<Window> CreateWindow()
    {
#if WIN32
        return std::make_shared<Win32Window>();
#elif APPLE
        return std::make_shared<MacOSWindow>();
#endif
    }
}
