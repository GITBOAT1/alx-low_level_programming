#include "main.h"

/**
 * _puts - check the code
 * @str: the hold a long string
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
		if (str[i] == '\n')
			break;
	}
	_putchar('\n');
}
