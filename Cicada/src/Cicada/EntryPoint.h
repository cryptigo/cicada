#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern Cicada::Application* Cicada::CreateApplication();

int main(int argc, char** argv)
{
	Cicada::Log::Init();
	CE_CORE_WARN("Initialized Log!");
	int a = 5;
	CE_INFO("Hello! Var={0}", a);

	auto app = Cicada::CreateApplication();
	app->Run();
	delete app;
}

#endif