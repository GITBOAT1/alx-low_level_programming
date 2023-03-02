#include "main.h"

/**
 * _sqrt_recursion_helper - check the code
 * @n: numer to make a squre root
 * @low: low
 * @high: using binary search
 * Return: Always 0.
 */

int _sqrt_recursion_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int square = mid * mid;

	if (low > high)
	{
		return (-1);
	}
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_recursion_helper(n, low, mid - 1));
	}
}


/**
 * _sqrt_recursion - check the code
 * @n: numer to make a squre root
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
		return (n);
	}
	else
	{
		int low = 0, high = n, mid = (low + high) / 2, square = mid * mid;

		if (square == n)
		{
			return (mid);
		} else if (square < n)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		return (_sqrt_recursion_helper(n, low, high));
	}
}
