#include <exec\exec.h>
#include <proto\exec.h>

BYTE OpenDevice(CONST_STRPTR devName, ULONG unit, struct IORequest * ioRequest, ULONG flags)
{
/*
	if (!name)
		return -1;


	// Find the library in the list
	struct Node *node = FindName(&SysBase.DeviceList, name);
	if (node != NULL)
	{
		struct Device *dev = (struct Device *)node;
		kprintf("EXEC", "Opening device \"%s\" (count: %i)\n", name, dev->Library.OpenCnt);

		return NULL;
	}

	kprintf("EXEC", "Failed to open device \"%s\" : not found !\n", name);
*/
	return -1;
}