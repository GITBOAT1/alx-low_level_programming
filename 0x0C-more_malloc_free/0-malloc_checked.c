#include "main.h"

/**
 * malloc_checked - check the code
 * @b: memory size
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (!a)
	{
		exit(98);
	}
	return ((void *)a);
}
