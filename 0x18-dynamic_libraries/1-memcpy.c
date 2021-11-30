#include "main.h"
/**
 * _memcpy- altenatve for memset for more in for use man
 * @dest: the address of memory to print
 * @n: the size of the memory to print
 * @src: SAMPLE TO PRINT
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *p1 = src;

	while (n--)
	{
		*p++ = *p1++;
	}
	return (dest);
}
