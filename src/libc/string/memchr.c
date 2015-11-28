#include <string.h>



/**
 * The memchr() function returns a pointer to the located character, or a null pointer if the character does not occur in the object. 
 * @s: The memory area
 * @c: The byte to search for
 * @n: The size of the area.
 *
 * returns the address of the first occurrence of @c, or %NULL
 * if @c is not found
 */
void * memchr(const void * s, int c, size_t n)
{
	const char * p = (const char *)s;
	while (n-- != 0)
	{
		if ((char)c == *p++)
		{
			return (void *)(p - 1);
		}
	}
	return NULL;
}