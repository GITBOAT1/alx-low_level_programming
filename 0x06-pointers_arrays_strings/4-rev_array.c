#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * reverse_array- revers the values in the pointer
 *
 * @a: pointer values to revers
 * @n : length of pointer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, *j, s =  n - 1;

	j = malloc(n * sizeof(int));
	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			j[i] = a[s];
			--s;
		}
		for (i = 0; i < n; i++)
			a[i] = j[i];
	}
	free(j);
}
