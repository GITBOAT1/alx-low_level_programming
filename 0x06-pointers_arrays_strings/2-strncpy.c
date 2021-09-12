#include "main.h"
/**
 * _strncpy - concatenate strings
 * @dest: string to concatenate
 * @src: source for copying
 * @n: lengthe to copy
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int len, len2, i;

	char j[100];

	len = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}

	while (*(src + len2) != '\0')
	{
		len2++;

	}
	for (i = 0; i < n; i++)
	{
		j[i] = src[i];
		if (src[i] == '\0')
		{
			break;

		}
	}
	/**
	 * add the secon src char to dest
	* @i: for increment
	* @j: for storing the current val
	*/
	for (i = 0; i < n; i++)
	{
		dest[i] = j[i];
	}
	return (dest);
}
