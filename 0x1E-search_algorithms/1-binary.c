#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
 * @array:  is a pointer to the first element of the array to search in
 * @size: -s the number of elements in array
 * @value:is the value to search for
 * Return: Always EXIT_SUCCESS else -1
 */

/**
 * loopmsg: -print tne display numbers
 * @m:  is a pointer to the first element of the array to search in
 * @array: -s the number of elements in array
 * @size: is the value to search for
 * @a: xyz
 * Return: Always EXIT_SUCCESS else -1
*/
void loopmsg(size_t m, int *array, size_t size, size_t a)
{
	for (a = a ;  a < m; a++)
	{
		printf("%d", array[a]);
		if (a < (size - 1))
			printf(", ");
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, m;

	printf("Searching in array: ");
	loopmsg(size, array, size, 0);
	while (l <= size - 1)
	{
		m = l + ((size - l) / 2);
		if (array[m] == value)
		return (m);
		if (array[m] < value)
		{
			l = m + 1;
			printf("Searching in array: ");
			loopmsg(size, array, size, m);
		}
		else
		{
			size = m - l;
			printf("Searching in array: ");
			loopmsg((m - 1), array, size, 0);
		}
	}
	return (-1);
}

