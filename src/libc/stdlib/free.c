#include <stdlib.h>
#include <exec\memory.h>
#include <proto\exec.h>


//
// A block of memory previously allocated by a call to malloc, calloc or realloc is deallocated, 
// making it available again for further allocations.
//
void free(APTR ptr)
{
	//FreeMem(ptr, 0);
}

