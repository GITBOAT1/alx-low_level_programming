#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string using the number of time supplied by the  n
 * @dest: the destination string
 * @src : the source to which we will append.
 * @n: the number of times we need to append the src
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if ((i == n) || (src[i] == '\0'))
			{
				break;
			}
			dest[i] = src[i];
		}
		for (; i < n; i++)
			dest[i] = '\0';
		return (dest);
	}
	return (dest);
}

