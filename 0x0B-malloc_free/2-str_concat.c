#include "main.h"
#include <stdlib.h>
/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: for chaecker sake  the size of the memory to print
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
	int i, length, len, sum, l;
	char *mem1;


	i = 0, length = 0, len = 0, l = 0;

	while (s1[length])
	{
		length += 1;
	}
	while (s2[len])
	{
		len += 1;
	}
	sum = length + len;
	mem1 = malloc(sum + 2);
	if (mem1 == NULL)
		return (NULL);
	{
		while (l < sum)
		{
			while (s1[i] != '\0')
			{
				mem1[l] = s1[i];
				i = i + 1;
				l = l + 1;
			}
			i = 0;
			while (s2[i] != '\0')
			{
				mem1[l] = s2[i];
				i += 1;
				l = l + 1;
			}
		}
	}
	return (mem1);
}
