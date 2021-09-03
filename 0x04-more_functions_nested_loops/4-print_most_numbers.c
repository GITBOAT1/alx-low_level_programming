#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print out number form 0-9
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		if (n == 2)
			continue;
		else if (n == 4)
			continue;
		else
			_putchar(n % 10 + '0');
	_putchar('\n');
}
