#include "main.h"

/**
 * print_rev - check the code
 * @s: the is the suppled words to be reversed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}

	if (i > 0)
	{
		while (i)
		{
			_putchar(s[i]);
			i--;
		}
	_putchar('\n');
	}

}
