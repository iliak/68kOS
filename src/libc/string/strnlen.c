#include <string.h>

/*
* Find the length of S, but scan at most MAXLEN characters.
*
*/
size_t strnlen(const char *s, size_t maxlen)
{
	const char *e;
	size_t n;

	for (e = s, n = 0; *e && n < maxlen; e++, n++)
	{

	}

	return n;
}