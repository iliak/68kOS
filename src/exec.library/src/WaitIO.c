
#include <exec\exec.h>
//#include <exec\kernel.h>

#include <proto\exec.h>

//
// wait for completion of an I/O request
//
BYTE WaitIO(struct IORequest *io)
{
	if (!io)
		return -1;


	return NULL;
}