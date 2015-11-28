#include <stdlib.h>

void itoa(unsigned long i, unsigned long base, char* buf);


//
// Convert an integer to a string
//
// i			value to convert
// base			base to convert (10, 16,...)
// buf			output buffer
void itoa_s(int i, unsigned long base, char *buf)
{
	if (base > 16)
		return;

	if (i < 0)
	{
		*buf++ = '-';
		i *= -1;
	}

	itoa(i, base, buf);
}
