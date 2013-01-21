#pragma once
#ifndef DISPLAY_OBJECT
#define DISPLAY_OBJECT

class DisplayObject {
	public:
		DisplayObject(void);
		~DisplayObject(void);
		virtual int Render(void);

		float x();
		float x(float value);
		float y();
		float y(float value);

	protected:
		float _x;
		float _y;
};

#endif