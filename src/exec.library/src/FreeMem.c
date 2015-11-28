#include <exec\exec.h>
#include <proto\exec.h>




//
//
//
void FreeMem(APTR ptr, ULONG size)
{
	if (ptr == NULL)
		return;
/*
	struct MemHeader * mh = (struct MemHeader *)GetHead(&SysBase.MemList);

	Forbid();
	Deallocate(mh, ptr, size);
	Permit();
*/
}

