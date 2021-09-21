#include "main.h"
#include <stdlib.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 * for chaecker sake  the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int i, length;
	char *mem1;


	i = 0, length = 0;
	if (!str)
	{
		return (NULL);
	}

	while (str[length])
	{
		length += 1;
	}

	mem1 = malloc(length + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	{
		while (str[i] != '\0')
		{
			mem1[i] = str[i];
			i = i + 1;
		}
	}
	return (mem1);
}
