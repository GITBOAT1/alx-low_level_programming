#include  "main.h"

/**
 * clear_bit - set a certain bits 0
 * @n: This is the number for search
 * @index: what position to search
 * Return: Always 1 or zero.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int l;

	l = (*n &= ~(1UL << index));

	if (l == '\0')
	{
		return (-1);
	}
	return (1);
}
