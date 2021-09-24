#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - add stirng using the n passed
 * @s1: char for adding
 * @s2: char to add
 * @n: where to stop
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	int c, d, t, l, x, z;

	c = 0, d = 0;
	while (s1[c] != '\0')
		c = c + 1;
	while (s2[d] != '\0')
		d = d + 1;


	t = c + d;
	str = (char *)malloc((char)t + 1);
	if (str == NULL)
		return (NULL);
	l = 0;
	if (s1 == NULL || s2 == NULL)
		return ("");
	while (t >= l)
	{
		for (z = 0; z < c; z++)
		{
			str[l] = s1[z];
			l = l + 1;
			t = t - 1;
		}
		for (x = 0; x < (int) n; x++)
		{
			str[l] = s2[x];
			l = l + 1;
			t = t - 1;
		}
	}

	return (str);

}
