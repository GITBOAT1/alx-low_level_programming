#include "main.h"

/**
 * print_diagsums - check the code
 * @a: the script to add through
 * @size: number of time to loop
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int z, b;
	int a1, a2;

	z = 0,  b = size;
	a1 = 0, a2 = 0;

	for (z = 0; z < size; z++)
	{
		a1 = a1 + a[z];
		a2 = a2 + a[b];
	}
	printf("%d, %d\n", a1, a2);
}
