#include "my_framework\FrameworkApplication.h"
#include "game\GameApplication.h"

int main() {
	FrameworkApplication *app = new GameApplication;
	app->MainLoop();
	delete app;
	return 0;
}