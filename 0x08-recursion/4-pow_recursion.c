#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: value or the base
 * @y: the powers
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		if (y < 0)
		{
			return (-1);
		}

		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
