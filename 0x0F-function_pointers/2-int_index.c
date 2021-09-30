#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: search item
 * @size: the integer to check
 * @cmp: fuction pointer for comparizion
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count, i;

	count = 0;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			count = count + 1;
	}

	if (count <= 0)
		return (-1);
	return (count);
}
