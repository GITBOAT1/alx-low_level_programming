#include "main.h"

/**
 * print_sign - print a sign of digit - or+
 * @n: just a variable from the input
 * Return: 0 means sucess
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
