#include "FrameworkApplication.h"
#include "IwDebug.h"

FrameworkApplication::FrameworkApplication (void) {
	IwTrace("",("new FrameworkApplication()"));
}
int FrameworkApplication::Start (void)  {
	IwTrace("",("FrameworkApplication -> Start()"));
	return 0;
}
FrameworkApplication::~FrameworkApplication (void) {
	IwTrace("",("~ FrameworkApplication()"));
}