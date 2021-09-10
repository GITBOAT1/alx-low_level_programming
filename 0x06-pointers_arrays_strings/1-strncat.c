#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate a string using the number of time supplied by the  n
 * @dest: the destination string
 * @src : the source to which we will append.
 * @n: the number of times we need to append the src
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2, i;

	len = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	/**
	 * get the lent source
	 */
	while (*(src + len2) != '\0')
	{
		len2++;
	}

	/**
	 *@i: this is use to tell length
	 * add the src char to dest
	 */
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}

	}
	return (dest);
}
