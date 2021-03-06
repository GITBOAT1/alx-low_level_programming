#include "main.h"


/**
 * factorial - return the fatorial of n
 * @n: the factorial number
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n <= 0)
	{
		if (n <= -1)
		{
			return (-1);
		}
		return (1);
	}
	return (n * factorial(n - 1));
}
