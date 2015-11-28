#include <exec\exec.h>
//#include <string.h>

#include <proto\exec.h>


//
// Allocate some memory on the global heap
//
APTR AllocMem(ULONG size, ULONG attributes)
{
/*
	kprintf("EXEC", "AllocMem() : Allocating %i octets.\n", size);

	if (size == 0)
		return NULL;

	// Check if there's enough free space on the heap
	struct MemHeader * mh = (struct MemHeader *)&SysBase.KernelHeap;
	if (mh == NULL)
	{
		kprintf("EXEC", "AllocMem() : No MemHeader found !!\n");
		return NULL;
	}


	if (mh->Free < size)
	{
		//TODO
		kprintf("EXEC", "Not enough free memory available !!\n");
		Alert(0L, "Need to increase the Heap !!");
	}


	Forbid();
	APTR mem = Allocate(mh, size);
	Permit();

	if (mem == NULL)
	{
		kprintf("EXEC", "AllocMem() : Failed to allocate %i bytes\n", size);
		return NULL;
	}


	if (attributes || MEMF_CLEAR)
	{
		kprintf("EXEC", "memset()...\n");
		//memset(mem, 0, size);

		UBYTE *temp = (UBYTE *)mem;
		for (ULONG count = size; count != 0; count--, temp[count] = 0)
		{
			if (count % 1024 == 0)
				kprintf("EXEC", "temp: %p count: %i %p\n", temp, count, &temp[count]);
		}

	}

	kprintf("EXEC", "%i octets allocated at %#010P\n", size, mem);

	return mem;
*/
	return NULL;
}

