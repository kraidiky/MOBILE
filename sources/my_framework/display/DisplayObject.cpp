#include "DisplayObject.h"
#include "IwDebug.h"

DisplayObject::DisplayObject(void) {
	IwTrace(FUNCTIONS, ("new DisplayObject()"));
	_x=0; _y=0;
}

DisplayObject::~DisplayObject(void) {
	IwTrace(FUNCTIONS,("~DisplayObject()"));
}

int DisplayObject::Render(void) { return 0;}

float DisplayObject::x() { return _x; }
float DisplayObject::x(float value) { return _x = value; }

float DisplayObject::y() { return _y; }
float DisplayObject::y(float value) { return _y = value; }

