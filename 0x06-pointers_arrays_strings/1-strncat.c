#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate a string using the number of time supplied by the  n
 * @dest: the destination string
 * @src : the source to which we will append.
 * @n: the number of times we need to append the src
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest), len2 = strlen(src), i;

	if (n != 0)
	{
		for (i = 0; i < len2; i++)
		{
			if (i == n)
			{
				break;
			}
			dest[len1 + i] = src[i];
		}
		return (dest);
	}
	return (dest);
}

