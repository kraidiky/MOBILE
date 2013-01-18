#pragma once
#include "../../my_framework/display/DisplayObject.h"
#include "s3e.h"
#include "IwGx.h"
//#include "IwGraphics.h"
#include "IwResManager.h"
#include "IwTextParserITX.h"

class Dice : public DisplayObject {
public:
	Dice(void);
	~Dice(void);

	virtual void Render(void);
};

