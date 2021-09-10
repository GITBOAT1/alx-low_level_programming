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
	char *ptr;

	while (*(++dest))
	{
		/**
		 * move until the end of line
		 */
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	ptr = dest;
	return (ptr);
}
