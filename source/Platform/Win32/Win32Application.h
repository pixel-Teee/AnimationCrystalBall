#pragma once
#include "Application.h"

namespace ACB {
	class Win32Application : public Application
	{
	public:
		Win32Application();

		~Win32Application();

		void run();
	};
}