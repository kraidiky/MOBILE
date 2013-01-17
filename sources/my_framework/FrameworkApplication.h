#pragma once
#ifndef FRAMEWORK_APPLCATION
#define FRAMEWORK_APPLCATION

#include "display\Stage.h"
 
class FrameworkApplication {
	public:
		FrameworkApplication(void);
		virtual ~FrameworkApplication(void);
		virtual int MainLoop(void);
		Stage *stage;
};
 
#endif