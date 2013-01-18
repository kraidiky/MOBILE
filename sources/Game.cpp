//#include "s3e.h"
#include "IwDebug.h"
#include "my_framework\FrameworkApplication.h"
#include "game\GameApplication.h"

int main () {
	IwTrace(FUNCTIONS, ("Game->main()"));
	FrameworkApplication *app = new GameApplication;
	app->MainLoop();
	delete app;
	return 0;
}