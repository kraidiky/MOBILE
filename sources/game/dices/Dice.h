#pragma once
#ifndef DICE_DISPLAY_OBJECT
#define DICE_DISPLAY_OBJECT

//#include "IwGx.h"
#include "IwGraphics.h"
//#include "IwResManager.h"

#include "../../my_framework/display/DisplayObject.h"

class Dice : public DisplayObject {
	public:
		Dice(void);
		~Dice(void);
		virtual int Render(void);

		float rx();
		float rx(float value);
		float ry();
		float ry(float value);
		float rz();
		float rz(float value);

	protected:
		CIwModel* pModel;
		float _rx;
		float _ry;
		float _rz;
};

#endif