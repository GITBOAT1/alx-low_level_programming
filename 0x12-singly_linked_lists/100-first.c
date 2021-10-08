#include <stdio.h>

/**
 * aftmain - print befor the main start.
 *
 *
 */

void _aftmain(void) __attribute__((constructor));

void _aftmain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
