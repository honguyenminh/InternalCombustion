#pragma once

#ifdef IC_PLATFORM_WINDOWS

extern IC::Application* IC::CreateApplication();

int main(int argc, char** argv) {
	auto app = IC::CreateApplication();
	app->Run();
	delete app;
}

#endif