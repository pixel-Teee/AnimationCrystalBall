#pragma once

#include "Application.h"

namespace ACB{
    class IOSApplication : public Application
    {
    public:
        IOSApplication();
        
        ~IOSApplication();
        
        virtual void run() override;
    private:
        void* m_application;
    };

    int32_t IOSEntryPoint(int argc, char* argv[]);
}
