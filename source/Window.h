#pragma once

#include <memory>

namespace ACB{
    class Window{
    public:
        Window();
        
        ~Window();
    };

    std::shared_ptr<Window> CreateWindow();
}
