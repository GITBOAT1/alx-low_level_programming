#include "main.h"

/**
 * abs - print absolute value
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
		return (0);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
