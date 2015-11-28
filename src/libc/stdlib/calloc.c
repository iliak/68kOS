#include <stdlib.h>
#include <exec\memory.h>

#include <proto\exec.h>




//
// Allocates a block of memory for an array of count elements, 
// each of them size bytes long, and initializes all its bits to zero.
//
void * calloc(ULONG count, ULONG size)
{
	//return AllocMem(count * size, MEMF_CLEAR);
	return NULL;
}


