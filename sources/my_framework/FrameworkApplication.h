#pragma once
#ifndef FRAMEWORK_APPLCATION
#define FRAMEWORK_APPLCATION

#include "IwGraphics.h"
#include "display\DisplayObject.h"

class FrameworkApplication {
	public:
		FrameworkApplication(void);
		virtual ~FrameworkApplication(void);
		virtual int MainLoop(void);
	protected:
		virtual int EachFrame(void);
		virtual int Render(void);

		DisplayObject *root;
};
 
#endif