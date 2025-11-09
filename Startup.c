#include <proto/exec.h>

#include <exec/exec.h>

LONG NOPHandler(struct ExecBase *SysBase);

LONG Startup() {
	struct ExecBase *SysBase = *(void **) 4;
	return NOPHandler(SysBase);
}
