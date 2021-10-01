#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: check point
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list  ap;
	unsigned int i, sum;

	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	return (sum);

}
