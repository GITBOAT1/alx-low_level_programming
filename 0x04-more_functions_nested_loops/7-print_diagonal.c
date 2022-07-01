#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print line out number form 0-9
 * @n: supplied from the main to.
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int a, c;

	if (n >= 1)
	{
		for (a = 0; a < n; a++)
		{
			for (c = 0; c < a; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
