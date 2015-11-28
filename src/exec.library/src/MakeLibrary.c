#include <exec\exec.h>
#include <proto\exec.h>


struct Library * MakeLibrary(const APTR funcInit, const APTR structInit, ULONG(*libInit)(), ULONG dataSize, ULONG segList)
//struct Library * MakeLibrary(APTR vector, struct InitStruct *structure, APTR init, ULONG size, ULONG seglist)
{

	return NULL;
}