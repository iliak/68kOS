#include <stdlib.h>




//
// The function pointed by func is automatically called without arguments when the program terminates normally.
//
int atexit(void (*func)(void))
{
	if (func != NULL)
		func();

	return 0;
}

