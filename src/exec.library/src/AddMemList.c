#include <exec/execbase.h>
#include <proto\exec.h>

//#include <exec/kernel.h>
//#include <exec/console.h>
//#include "../pmm.h"


/*
* Add a new block of memory to the system memory lists.
*
*
*/
void AddMemList(ULONG size, ULONG attributes, LONG pri, APTR base, CONST_STRPTR name)
{
	#ifdef _DEBUG
	kprintf("EXEC", "Adding memory region : [%#010P - %#010P] : %7i Ko,\ttype: %i (%s)\n", base, base + size - 1, size / 1024, type, name);
	console_printf("Memory : [%#010P - %#010P] : %7i Ko, type: %i (%s)\n", base, base + size - 1, size / 1024, type, name);
	#endif

	//TODO: Use MemHeader !!!

/*
	//MemHeader *mh = (MemHeader *)start;
	//mh->Node.Type = NT_MEMORY;
	//mh->Node.Pri = NULL;
	//mh->Node.Name = name;
	//mh->Attributes = type;
	//mh->First = (MemChunk *)((UBYTE *)mh + MEMHEADER_TOTAL);
	//mh->First->Next = NULL;
	//mh->First->Size = size - MEMHEADER_TOTAL;
	//mh->Lower = mh->First;
	//mh->Upper = (APTR)((UBYTE *)start + size);
	//mh->Free = mh->First->Size;


	// Check if free for use or ACPI reclaimable
	if (type == 1) // || type == 3)
	{
		// Mark region as available
		pmm_enable_region(base, size);

		SysBase.MemoryMaxPages += size / PAGE_SIZE;
		SysBase.MemorySize += size;
	}
	else
	{
		pmm_disable_region(base, size);
	}

	// Add to the total memory size
	//if (type == 1 || type == 3)
*/
}