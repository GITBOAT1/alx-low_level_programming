#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print out number form 0-9
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n % 10 + '0');
	_putchar('\n');
}
