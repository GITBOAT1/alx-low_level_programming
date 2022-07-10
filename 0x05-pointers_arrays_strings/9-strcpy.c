#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string 2 into string 1
 *
 * @dest: string 1
 * @src: string 2
 *
 * Return: return copied string
*/

char *_strcpy(char *dest, char *src)
{
	int i = strlen(src) + 1, n;

	for (n = 0; n < i; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
