#include <string.h> 



/*
* The strcspn() function computes the length of the maximum initial segment of the string pointed to by s1
* which consists entirely of characters not from the string pointed to by s2.
*
*
*
*/
size_t strcspn(const char * s1, const char * s2)
{
	int ret = 0;
	while (*s1)
		if (strchr(s2, *s1))
			return ret;
		else
			s1++, ret++;
	return ret;
}