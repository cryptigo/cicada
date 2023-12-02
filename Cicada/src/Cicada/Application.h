#pragma once

#include "Core.h"

namespace Cicada {

	class CICADA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

