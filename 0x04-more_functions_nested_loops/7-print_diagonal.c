#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print line out number form 0-9
 * @n: supplied from the main to.
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int a, b, c;

	b = 0;
	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		b = b + 1;
		for (c = 0; c < b; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
