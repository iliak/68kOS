
#include <exec\exec.h>
#include <proto\exec.h>

//
// perform an I/O command and wait for completion
//
BYTE DoIO(struct IORequest * ioRequest)
{
	if (!ioRequest || ioRequest->io_Device == NULL)
		return -1;

	ioRequest->io_Flags = IOF_QUICK;
	ioRequest->io_Message.mn_Node.ln_Type = 0;

	//BeginIO(ioRequest);

	if (!ioRequest->io_Flags & IOF_QUICK)
		WaitIO(ioRequest);

	return ioRequest->io_Error;
}