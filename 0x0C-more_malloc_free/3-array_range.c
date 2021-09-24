#include "main.h"

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *p, l, i;

	if (min > max)
		return (NULL);
	p = malloc((min + max) * sizeof(int));
	if (!p)
		return (NULL);
	l = min + max;
	i = 0;
	while (l > 0)
	{
		l = l - 1;

		p[i] = i;
		i = i + 1;
	}
	return (p);
}
