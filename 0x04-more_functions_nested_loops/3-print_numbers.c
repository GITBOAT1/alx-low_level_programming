#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print out number form 0-9
 * @n: is a variable.
 *Return: Always 0.
 */
void print_numbers(void)
{
 	int n;
	for ( n = 0; n <= 9; n++)
		putchar(n);
	_putchar('\n');
	return (void);
}

