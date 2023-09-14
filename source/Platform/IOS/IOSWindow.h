#pragma once

#include "Window.h"

namespace ACB{
    class IOSWindow : public Window
    {
    public:
        IOSWindow();
        
        ~IOSWindow();
        
    private:
        void* m_window;
        
        void* m_controller;
    };
}
