#include <iostream>

#include "Application.h"

using namespace std;

int main()
{
    //std::cout << "hello" << std::endl;
    std::shared_ptr<ACB::Application> app = ACB::CreateApplication();
    app->run();
    return 0;
}
