#pragma once
#ifndef DISPLAY_OBJECT_3D
#define DISPLAY_OBJECT_3D

#include "IwGraphics.h"
#include "DisplayObject.h"
/** Абстрактный класс */
class DisplayObject3D : public DisplayObject {
	public:
		DisplayObject3D(void);
		~DisplayObject3D(void);
		virtual int Render(void);

		float z();
		float z(float value);
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
		float _z;
};

#endif