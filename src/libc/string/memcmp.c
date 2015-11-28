#include <string.h>


/**
 * memcmp - Compare two areas of memory
 * @cs: One area of memory
 * @ct: Another area of memory
 * @count: The size of the area.
 */
//#pragma function(memcmp)

int memcmp(const void *cs, const void *ct, size_t count)
{
	char *su1, *su2;
	int res = 0;

	for (su1 = (char *) cs, su2 = (char *) ct; 0 < count; ++su1, ++su2, count--)
	{
		if ((res = *su1 - *su2) != 0)
			break;
	}

	
	return res;
}