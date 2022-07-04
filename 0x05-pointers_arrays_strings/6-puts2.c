#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str : string to print;
 *
 * Return: nothing
*/

void puts2(char *str)
{
	size_t i = 0;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
