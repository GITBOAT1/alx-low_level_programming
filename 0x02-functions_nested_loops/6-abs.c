#include "main.h"

/**
 * print_sign - print a sign of digit - or+
 * @n: just a variable from the input
 * Return: 0 means sucess
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
