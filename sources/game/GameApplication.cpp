#include "GameApplication.h"
#include "../my_framework/FrameworkApplication.h"
#include "IwDebug.h"
#include "IwGraphics.h"

#include "dices/Dice.h"

GameApplication::GameApplication(void) {
	IwTrace(FUNCTIONS, ("new GameApplication()"));
	root = dice = new Dice;
	IwGetResManager()->LoadGroup("Dice.group");	
	pModel = (CIwModel*)IwGetResManager()->GetResNamed("Dice", "CIwModel");
}

GameApplication::~GameApplication(void) {
	IwTrace(FUNCTIONS, ("~GameApplication()"));
	delete pModel;
	delete dice;
}

int GameApplication::EachFrame(void) {
	//FrameworkApplication::EachFrame();
	// Поменять показатели на дайсе
//	dice -> rx(dice -> rx() + 0.01);
//	dice -> ry(dice -> ry() + 0.02);
//	dice -> rz(dice -> rz() + 0.03);

	IwGxClear( IW_GX_COLOUR_BUFFER_F | IW_GX_DEPTH_BUFFER_F );
	IwGxLightingOn();

	CIwFMat view = CIwFMat::g_Identity;
	view.t.z = -80;
	view.t.y = 80;
	view.t.x = -60;
	view.LookAt(view.GetTrans(), CIwFVec3(0, 0, 0), -CIwFVec3::g_AxisY);
	IwGxSetViewMatrix(&view);

	CIwFMat modelMatrix = CIwFMat::g_Identity;
	modelMatrix.t.x = 5;
	IwGxSetModelMatrix(&modelMatrix);

	pModel->Render();

	IwGxFlush();
	IwGxSwapBuffers();
	return 0;
}

int GameApplication::Render(void) {
	return FrameworkApplication::Render();
	return 0;
}
		
