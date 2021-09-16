#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: numer to make a squre root
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (n);
	}
	return (1 + _sqrt_recursion(n - 2));
}
