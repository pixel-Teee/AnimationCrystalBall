#include "Win32Application.h"

#include <Windows.h>

namespace ACB {
	Win32Application::Win32Application()
	{
	}
	Win32Application::~Win32Application()
	{
	}
	void Win32Application::run()
	{
		MSG msg = { 0 };
		//process message
		while (GetMessage(&msg, NULL, 0, 0))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
}