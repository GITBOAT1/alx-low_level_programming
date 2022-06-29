#include <stdio.h>

/**
 * main - find a prime numbers and print the largest prime
 *
 * Retrun: 0 on success
 *
 */

int main(void)
{
	unsigned long int i, lprime = 612852475143;

	for (i = 2; i < lprime; i++)
	{
		if (lprime % i  == 0)
		{
			lprime = lprime / i;
		}
	}
	printf("%lu\n", lprime);

	return (0);
}
