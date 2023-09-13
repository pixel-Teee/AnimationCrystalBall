#pragma once

#include "Window.h"

namespace ACB{
    class MacOSWindow : public Window{
    public:
        MacOSWindow();
        
        ~MacOSWindow();
        
    private:
        void* m_window;
    };


}
