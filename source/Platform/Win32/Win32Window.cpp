#include "Win32Window.h"

#include <Windows.h>

namespace ACB {

	Win32Window::Win32Window(HINSTANCE appInstance)
	{
		m_hwnd = CreateWindowEx(
			0,
			L"WindowClass",
			L"New Create Window",
			WS_OVERLAPPEDWINDOW,            // Window style

			// Size and position
			CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

			NULL,       // Parent window    
			NULL,       // Menu
			appInstance,  // Instance handle
			NULL        // Additional application data
		);

		ShowWindow(m_hwnd, true);
	}
	Win32Window::~Win32Window()
	{
	}
}