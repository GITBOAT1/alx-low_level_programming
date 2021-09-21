#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *mem1;
	
	if (!size)
	{
		return (NULL);
	}


	mem1 = malloc(size * sizeof(char));
	{
		if (size > 0)
		{
			for (; size > 0; size--)
			{
				mem1[size] = c;
			}
		}
		else
			return (NULL);
	}
	return (mem1);
}
