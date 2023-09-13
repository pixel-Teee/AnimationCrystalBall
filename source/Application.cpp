#include "Application.h"

#if WIN32

#elif APPLE
    #include "Platform/macOS/MacOSApplication.h"
#endif


namespace ACB{
    Application::Application(){
    
    }

    Application::~Application(){
    
    
    }

    void Application::run(){
    
    
    }

    std::shared_ptr<Application> CreateApplication()
    {
        //return std::shared_ptr<Application>();
        
#if WIN32
        return std:shared_ptr<Application>();
#elif APPLE
        return std::make_shared<MacOSApplication>();
#endif
    }
}
