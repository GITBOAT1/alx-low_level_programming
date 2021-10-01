#include "variadic_functions.h"

/**
 * print_strings - as the name says
 * @separator: the required
 * @n: the number of reads;
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator)
	{
		for (i = 0; i < n; ++i)
		{

			printf("%s", va_arg(ap, char *));
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
		printf("\n");
	}
}
