#include <IC.h>

class Sandbox : public IC::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

IC::Application* IC::CreateApplication() {
	return new Sandbox();
}

