#pragma once
#include "Application.h"

#include <Windows.h>

namespace ACB {
	class Win32Application : public Application
	{
	public:
		Win32Application();

		~Win32Application();

		virtual void run() override;

		void setApplicationHandle(HINSTANCE appHandle);

		HINSTANCE getApplicationHandle();
	private:
		void registerWin32WindowClass();
		HINSTANCE m_appHandle;
	};
}