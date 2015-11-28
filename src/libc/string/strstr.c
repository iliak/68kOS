#include <string.h>

/*
* The strstr() function locates the ﬁrst occurrence in the string pointed to by s1 of the sequence of characters
* (excluding the terminating null character) in the string pointed to by s2. 
*
*
*/
char * strstr(const char * s1, const char * s2)
{
	int n = strlen(s2);
	while (*s1)
		if (!memcmp((void *)s1++, (void *)s2, n))
			return (char *)(s1 - 1);
	return 0;
}