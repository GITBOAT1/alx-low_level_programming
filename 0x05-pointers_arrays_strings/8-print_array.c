#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array
 *
 * @a: values in array to print
 * @n: length of the array
 * Retrun: nothing
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
