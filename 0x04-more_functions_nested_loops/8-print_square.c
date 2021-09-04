#include "main.h"
#include <stdio.h>

/**
 * print_square - print line out number form 0-9
 * @size: supplied from the main to.
 * Return: Always 0.
 */
void print_square(int size)
{

	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
