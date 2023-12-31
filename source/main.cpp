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
#elif MACOS
int main()
{
	//std::cout << "hello" << std::endl;
	std::shared_ptr<ACB::Application> app = ACB::CreateApplication();
    app->makeWindow();
	app->run();
	return 0;
}
#elif IOS
#include "Platform/IOS/IOSApplication.h"

//#include <UIKit/UIKit.h>
int main(int argc, char* argv[])
{
    //std::cout << "hello" << std::endl;
    //std::shared_ptr<ACB::Application> app = ACB::CreateApplication();
    //app->makeWindow();
    //std::shared_ptr<ACB::IOSApplication> iosApp = std::static_pointer_cast<ACB::IOSApplication>(app);
    //app->run();
    
    //UIApplicationMain(argc, argv, nil, nil);
    
    return ACB::IOSEntryPoint(argc, argv);
    //return 0;
}
#elif ANDROID
#include <jni.h>
#include <game-activity/GameActivity.cpp>//important
#include <game-text-input/gametextinput.cpp>//important
extern "C" {

#include <game-activity/native_app_glue/android_native_app_glue.c>

void handle_cmd(android_app *pApp, int32_t cmd) {

}

void android_main(struct android_app *pApp) {
    //pApp->onAppCmd = handle_cmd;

    do{

    }while(1);
}
}
#endif

