#include "variadic_functions.h"

/**
 * print_numbers - as the name says
 * @separator: the required
 * @n: the number of reads;
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator)
	{
		for (i = 0; i < n; ++i)
		{
			printf("%d", va_arg(ap, int));
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
		printf("\n");
	}
}
