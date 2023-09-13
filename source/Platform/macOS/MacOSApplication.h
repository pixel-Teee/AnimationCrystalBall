#include "Application.h"

namespace ACB{
    class MacOSApplication : public Application
    {
    public:
        MacOSApplication();
        
        ~MacOSApplication();
        
        virtual void run() override;
    private:
        void* m_application;
    };
}
