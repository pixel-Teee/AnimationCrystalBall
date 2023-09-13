#pragma once

#include <memory>

namespace ACB{
    class Application{
    public:
        Application();
        
        ~Application();
        
        virtual void run();
    };

    std::shared_ptr<Application> CreateApplication();
}

