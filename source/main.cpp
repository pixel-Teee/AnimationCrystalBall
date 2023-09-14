#include <iostream>

#include "Application.h"

#if WIN32
#include "Platform/Win32/Win32Application.h"
#include <Windows.h>
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	std::shared_ptr<ACB::Application> app = ACB::CreateApplication();

	std::shared_ptr<ACB::Win32Application> win32App = std::static_pointer_cast<ACB::Win32Application>(app);
	win32App->setApplicationHandle(hInstance);
	win32App->makeWindow();
	app->run();
	return 0;
}
#else
int main()
{
	//std::cout << "hello" << std::endl;
	std::shared_ptr<ACB::Application> app = ACB::CreateApplication();
    app->makeWindow();
	app->run();
	return 0;
}
#endif

