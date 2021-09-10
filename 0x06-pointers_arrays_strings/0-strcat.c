#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate astring
 *
 * @dest: original file.
 * @src: file to add
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;
	char *ptr, *ptr2;

	len1 = 0, len2 = 0, i = 0;
	while (*(dest + len1) != '\0')
	{
		/**
		 * move until the end of line
		 */
		len1++;
	}

	while (*(src + len2) != '\0')
	{
		len2++;
	}
	ptr = &dest[len1];
	ptr2 = src;

	for (i = 0; i < len2; i++)
	{
		*(ptr + i) = *(ptr2 + i);
	}

	return (dest);
}
