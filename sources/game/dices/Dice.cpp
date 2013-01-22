#include "IwGraphics.h"

#include "Dice.h"

Dice::Dice(void) {
	IwTrace(FUNCTIONS, ("new Dice()"));
	IwGetResManager()->LoadGroup("Dice.group");	
	pModel = (CIwModel*)IwGetResManager()->GetResNamed("Dice", "CIwModel");
}

Dice::~Dice(void) {
	IwTrace(FUNCTIONS, ("~Dice()"));
	delete pModel;
}

