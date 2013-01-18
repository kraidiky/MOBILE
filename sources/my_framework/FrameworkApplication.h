#pragma once
#ifndef FRAMEWORK_APPLCATION
#define FRAMEWORK_APPLCATION

class FrameworkApplication {
	public:
		FrameworkApplication(void);
		virtual ~FrameworkApplication(void);
		virtual int MainLoop(void);
};
 
#endif