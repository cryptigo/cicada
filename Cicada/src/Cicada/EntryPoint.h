#pragma once

#ifdef CE_PLATFORM_WINDOWS

extern Cicada::Application* Cicada::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cicada::CreateApplication();
	app->Run();
	delete app;
}

#endif