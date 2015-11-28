#include <string.h>

//
// The memset function copies the value of c (converted to an UBYTE) into each of the ﬁrst n characters of the object pointed to by s. 
//
#pragma function(memset)
//#pragma intrinsic(memset)

void * memset(void *dest, int val, size_t count)
{
	char * p = (char *)dest;
	while (count--)
		*p++ = (char)val;
	return dest;

}


