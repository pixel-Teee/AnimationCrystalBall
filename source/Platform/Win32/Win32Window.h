#pragma once
#include "Window.h"

#include <Windows.h>

namespace ACB {
	class Win32Window : public Window {
	public:
		Win32Window(HINSTANCE appInstance);

		~Win32Window();
	private:
		HWND m_hwnd;
	};
}