#pragma once
#ifndef GAME_APPLICATION
#define GAME_APPLICATION

#include "..\my_framework\FrameworkApplication.h"
#include "IwGraphics.h"
#include "dices\Dice.h"

class GameApplication : public FrameworkApplication {
	public:
		GameApplication(void);
		virtual ~GameApplication(void);
	protected:
		virtual int EachFrame(void);
		virtual int Render(void);

		CIwModel* pModel;
		//CIwFMat view;
		//Dice *dice;
};
 
#endif