#include <string.h>


// compare two strings
#pragma function(strcmp)

/**
* Compare strings pointed by str1, str2.  Return 0 if same, < 0 if str1
* less then str2, > 0 otherwise
*/
int strcmp(const char * str1, const char * str2)
{
	int res = 0;

	while (!(res = *(char *)str1 - *(char*)str2) && *str2)
	{
		++str1, ++str2;
	}	

	if (res < 0)
		res = -1;

	if (res > 0)
		res = 1;

	return res;
}

