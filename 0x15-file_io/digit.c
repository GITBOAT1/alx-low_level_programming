#include "main.h"

/**
 * print_last_digit - print last  digit - or+
 * @n: just a variable from the input
 * Return: 0 means sucess
 */

int print_last_digit(int n)
{

	if (n > 0)
	{
		n = n % 10;
		_putchar('0' + n);
	}
	else if (n == 0)
	{
		_putchar('0' + n);
	}
	else
	{
		n *= -1;
		n = n % 10;
		_putchar('0' + n);
	}
	return (n);
}
