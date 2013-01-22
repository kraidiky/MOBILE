#include "DisplayObject3D.h"
#include "IwDebug.h"

DisplayObject3D::DisplayObject3D(void) {
	IwTrace(FUNCTIONS, ("new DisplayObject3D()"));
	_z=0; _rx=0; _ry=0; _rz=0;
}

DisplayObject3D::~DisplayObject3D(void) {
	IwTrace(FUNCTIONS, ("~DisplayObject3D()"));
}

int DisplayObject3D::Render(void) { return 0;}

float DisplayObject3D::z() { return _z; }
float DisplayObject3D::z(float value) { return _z = value; }

float DisplayObject3D::rx() { return _rx; }
float DisplayObject3D::rx(float value) { return _rx = value; }

float DisplayObject3D::ry() { return _ry; }
float DisplayObject3D::ry(float value) { return _ry = value; }

float DisplayObject3D::rz() { return _rz; }
float DisplayObject3D::rz(float value) { return _rz = value; }
