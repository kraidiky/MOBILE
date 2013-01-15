#pragma once

#include "DisplayObject.h"

// ������ ��������� ���� �������� �������� ��� ��������.
class DisplayObjectComposit : public DisplayObject {
public:
	DisplayObjectComposit(void);
	~DisplayObjectComposit(void);
	void addChild(DisplayObject child);
	void addChildAt(DisplayObject child, int index);
};

