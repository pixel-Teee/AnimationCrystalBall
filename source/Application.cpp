#include "Application.h"

#if WIN32
    #include "Platform/Win32/Win32Window.h"
    #include "Platform/Win32/Win32Application.h"
#elif APPLE
    #include "Platform/macOS/MacOSWindow.h"
    #include "Platform/macOS/MacOSApplication.h"
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
#elif APPLE
        m_window = std::make_shared<MacOSWindow>();
#endif
    }

    std::shared_ptr<Application> CreateApplication()
    {
        //return std::shared_ptr<Application>();
        
#if WIN32
        return std::make_shared<Win32Application>();
#elif APPLE
        return std::make_shared<MacOSApplication>();
#endif
    }
}
