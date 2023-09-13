#pragma once

#include <memory>

#include "Window.h"

namespace ACB{
    class Application{
    public:
        Application();
        
        ~Application();
        
        virtual void run();
        
    private:
        std::shared_ptr<Window> m_window;
    };

    std::shared_ptr<Application> CreateApplication();
}

