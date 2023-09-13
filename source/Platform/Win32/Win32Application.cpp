#include "Win32Application.h"

#include <Windows.h>

namespace ACB {
	LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

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
	void Win32Application::setApplicationHandle(HINSTANCE appHandle)
	{
		m_appHandle = appHandle;

		registerWin32WindowClass();
	}
	HINSTANCE Win32Application::getApplicationHandle()
	{
		return m_appHandle;
	}
	void Win32Application::registerWin32WindowClass()
	{
		//register window class 
		const wchar_t CLASS_NAME[] = L"WindowClass";

		WNDCLASS wc = {};
		wc.lpfnWndProc = WindowProc;
		wc.hInstance = m_appHandle;
		wc.lpszClassName = CLASS_NAME;

		RegisterClass(&wc);
	}
	LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
	{
		switch (uMsg)
		{
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
}