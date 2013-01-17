#pragma once

#include "DisplayObject.h"

// Рендер композита есть композит рендеров его чайдлдов.
class DisplayObjectComposit : public DisplayObject {
public:
	DisplayObjectComposit(void);
	~DisplayObjectComposit(void);
	void addChild(DisplayObject child);
	void addChildAt(DisplayObject child, int index);
};

