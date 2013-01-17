#pragma once
class DisplayObject
{
public:
	DisplayObject(void);
	~DisplayObject(void);

	float x();
	float x(float value);


	float y();
	float y(float value);

	virtual void Render(void);
protected:
	float _x;
	float _y;
};

