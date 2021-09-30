#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: the supply numbers
 * @size: the looping
 * @action: function pointer
 * 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l;
	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
