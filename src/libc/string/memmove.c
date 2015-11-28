#include <string.h>
/**
 * memmove - Copy one area of memory to another
 * @dest: Where to copy to
 * @src: Where to copy from
 * @count: The size of the area.
 *
 * Unlike memcpy(), memmove() copes with overlapping areas.
 */
void * memmove(void * dest, const void * src, size_t count)
{
	char *tmp;
	const char *s;

	if (dest <= src)
	{
		tmp = (char *)dest;
		s = (const char *)src;
		while (count--)
			* tmp++ = *s++;
	}
	else
	{
		tmp = (char *)dest;
		tmp += count;
		s = (const char *)src;
		s += count;
		while (count--)
			* --tmp = *--s;
	}
	return dest;
}