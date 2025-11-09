#include <proto/exec.h>

#include <exec/exec.h>

LONG NOPHandler(struct ExecBase *SysBase);

__startup AROS_PROCH(Startup, arguments, argumentsLength, SysBase) {
	AROS_PROCFUNC_INIT
	return NOPHandler(SysBase);
	AROS_PROCFUNC_EXIT
}
