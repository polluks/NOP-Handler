#include <proto/exec.h>

#include <exec/exec.h>
#include <interfaces/exec.h>

LONG NOPHandler(struct ExecIFace *IExec);

int32 _start(STRPTR arguments, int32 argumentsLength, struct ExecBase *SysBase) {
	struct ExecIFace *IExec = (void *) SysBase->MainInterface;
	IExec->Obtain();
	LONG retVal = NOPHandler(IExec);
	IExec->Release();
	return retVal;
}
