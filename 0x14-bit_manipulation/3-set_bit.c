#include  "main.h"

/**
 * set_bit - set a certain number to an index provided
 * @n: This is the number for search
 * @index: what position to search
 * Return: Always 1 or zero.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int l;

	l = (*n |= 1UL << index);

	if (l == '\0')
	{
		return (-1);
	}
	return (1);
}
