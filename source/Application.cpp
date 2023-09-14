#include "Application.h"

#if WIN32
    #include "Platform/Win32/Win32Window.h"
    #include "Platform/Win32/Win32Application.h"
#elif MACOS
    #include "Platform/macOS/MacOSWindow.h"
    #include "Platform/macOS/MacOSApplication.h"
#elif IOS
    #include "Platform/IOS/IOSWindow.h"
    #include "Platform/IOS/IOSApplication.h"
#endif

namespace ACB{
    Application::Application(){
        
    }

    Application::~Application(){
    
    
    }

    void Application::run(){
    
    }

    void Application::makeWindow()
    {
#if WIN32
        std::shared_ptr<ACB::Win32Application> win32App = std::static_pointer_cast<ACB::Win32Application>(shared_from_this());
        m_window = std::make_shared<Win32Window>(win32App->getApplicationHandle());
#elif MACOS
        m_window = std::make_shared<MacOSWindow>();
#elif IOS
        
        m_window = std::make_shared<IOSWindow>();
#endif
    }

    std::shared_ptr<Application> CreateApplication()
    {
        //return std::shared_ptr<Application>();
        
#if WIN32
        return std::make_shared<Win32Application>();
#elif MACOS
        return std::make_shared<MacOSApplication>();
#elif IOS
        return std::make_shared<IOSApplication>();
#endif
    }
}
