#pragma once
#include "Core.h"

namespace IC {
	class IC_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}