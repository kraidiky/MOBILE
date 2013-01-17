#pragma once
#include "../../my_framework/display/DisplayObject.h"
class Dice : public DisplayObject {
public:
	Dice(void);
	~Dice(void);

	virtual void Render(void);
};

