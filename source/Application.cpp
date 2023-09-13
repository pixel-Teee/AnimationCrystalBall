#include "Application.h"

#if WIN32
    #include "Platform/Win32/Win32Application.h"
#elif APPLE
    #include "Platform/macOS/MacOSApplication.h"
#endif


namespace ACB{
    Application::Application(){
        m_window = CreateWindow();
    }

    Application::~Application(){
    
    
    }

    void Application::run(){
    
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
