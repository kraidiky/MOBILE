#include "s3e.h"
#include "IwDebug.h"
#include "my_framework\FrameworkApplication.h"
#include "game\GameApplication.h"

int main () {
	IwTrace("",("Game->main()"));
	FrameworkApplication *app = new GameApplication;
	app->Start();
	delete app;
	return 0;
}