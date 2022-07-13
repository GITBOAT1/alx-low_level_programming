#include <stdio.h>
#include "main.h"

/**
 * _strcmp -compare two strings
 * @s1: the destination string
 * @s2: the source to which we will append.
 *   : the number of times we need to append the src
 * Return: Always 0.
 */

int _strcmp(char *s1,  char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
