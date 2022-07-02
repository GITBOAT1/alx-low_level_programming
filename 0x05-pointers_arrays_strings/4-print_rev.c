#include "main.h"

/**
 * print_rev - check the code
 * @s: the is the suppled words to be reversed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	i = 1;

	while (s[i] != '\0')
	{
		i = i + 1;
	}

	while (i != -1)
	{
		_putchar(s[i]);

		--i;
	}
	_putchar('\n');
}
