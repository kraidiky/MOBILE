#include "DisplayObject.h"

DisplayObject::DisplayObject(void) {
	_x=0; _y=0;
}

DisplayObject::~DisplayObject(void) {
}

float DisplayObject::x() { return _x; }
float DisplayObject::x(float value) { return _x = value; }


float DisplayObject::y() { return _y; }
float DisplayObject::y(float value) { return _y = value; }

void DisplayObject::Render(void) {}

