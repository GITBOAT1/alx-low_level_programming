#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print line out number form 0-9
 * @n: supplied from the main to.
 * Return: Always 0.
 */

void print_triangle(int n)
{

	int a, c, b;


	b = n;
	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		b = b - 1;
		for (c = b; c >= 1; c--)
		{
			_putchar(' ');
		}
		for (c = a; c >= 0; c--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
