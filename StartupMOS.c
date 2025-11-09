#include <proto/exec.h>

#include <exec/exec.h>
#include <dos/dosextens.h>

ULONG __abox__ = 1;

LONG NOPHandler(struct ExecBase *SysBase);

LONG Startup() {
	struct ExecBase *SysBase = *(void **) 4;
	return NOPHandler(SysBase);
}
