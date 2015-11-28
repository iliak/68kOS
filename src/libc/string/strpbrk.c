#include <string.h>

/*
* The strpbrk() function locates the ﬁrst occurrence in the string pointed to by s1 of any character from the string pointed to by s2. 
*
*
*/
char *strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (strchr(s2, *s1++))
		{
			return (char*)--s1;
		}
	}
	return 0;
}