#include "IwGraphics.h"

#include "Dice.h"

Dice::Dice(void) {
	_rx = 0; _ry = 0; _rz = 0;
}

int Dice::Render(void) {
	//pModel->Render();
	return 0;
}

Dice::~Dice(void) {
	//delete pModel;
}

float Dice::rx() { return _rx; }
float Dice::rx(float value) { return _rx = value; }

float Dice::ry() { return _ry; }
float Dice::ry(float value) { return _ry = value; }

float Dice::rz() { return _rz; }
float Dice::rz(float value) { return _rz = value; }

