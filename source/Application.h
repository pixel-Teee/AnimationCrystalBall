#pragma once

#include <memory>

namespace ACB{
    class Window;
    class Application : public std::enable_shared_from_this<Application>{
    public:
        Application();
        
        ~Application();
        
        virtual void run();
        
        void makeWindow();
    private:
        std::shared_ptr<Window> m_window;
    };

    std::shared_ptr<Application> CreateApplication();
}

