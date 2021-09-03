#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print out number form 0-9
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n, j;

	for (n = 0; n <= 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j % 10 + '0');
			else
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
