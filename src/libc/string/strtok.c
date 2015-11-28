#include <string.h> 

/*
* The strtok() function breaks the string s1 into tokens and null-terminates them.
* Delimiter-Characters at the beginning and end of str are skipped.
* On each subsequent call delim may change.
*
*
*/
char *strtok(char * str, const char *delim)
{
	static char* p = 0;
	if (str)
		p = str;
	else if (!p)
		return 0;
	str = p + strspn(p, delim);
	p = str + strcspn(str, delim);
	if (p == str)
		return p = 0;
	p = *p ? *p = 0, p + 1 : 0;
	return str;
}