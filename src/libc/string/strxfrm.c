#include <string.h> 


/*
* The strxfrm() function transforms the string pointed to by src and places the resulting string into the array pointed to by dest.
* The transformation is such that if the strcmp() function is applied to two transformed strings, it returns a value greater than, 
* equal to, or less than zero, corresponding to the result of the strcoll() function applied to the same two original strings.
* No more than n characters are placed into the resulting array pointed to by dest, including the terminating null character.
* If n is zero, dest is permitted to be a null pointer. If copying takes place between objects that overlap, the behavior is undefined. 
*
*
*
*/
size_t strxfrm(char *dest, const char * src, size_t n)
{
	int n2 = strlen(src);
	if (n>n2)
		strcpy(dest, src);
	return n2;
}