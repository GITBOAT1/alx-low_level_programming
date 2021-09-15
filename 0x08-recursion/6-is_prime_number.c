#include "main.h"
/**
 * is_prime_number - check the code
 * @n: yes or no
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		return (n == 2) ? 1 : 0;
	}
	return  (is_prime_number(n + 1);
}
