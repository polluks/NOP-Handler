#ifdef __DEBUG__
	#ifdef __AROS__
	#include <aros/debug.h>
	#else
	void kprintf(char *fmt, ...);
	#endif
#else
#define kprintf(...)
#endif

const char *ActionToName(LONG action);
