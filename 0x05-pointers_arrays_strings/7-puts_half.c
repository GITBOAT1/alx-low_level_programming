#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - function that prints half of a string.
 * @str: value for printing
 * Retrun 0;
*/

void puts_half(char *str)
{
	int i, j;


	i = strlen(str);
	if (i % 2 == 0)
	{
		i = i / 2;
		for (j = 0; j < i; j++)
		{
			printf("%c", str[j + i]);
		}
	}
	else
	{
		i = (i + 1) / 2;
		for (j = 0; j < i; j++)
		{
			printf("%c", str[j + i]);
		}
	}
	printf("\n");
}
