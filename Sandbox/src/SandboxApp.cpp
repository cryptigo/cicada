#include <Cicada.h>

class Sandbox : public Cicada::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Cicada::Application* Cicada::CreateApplication()
{
	return new Sandbox();
}