#include "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * @len: check for the length
 * Return: Nothing.
 */
void *_memset(void *s, int c,  unsigned int len)
{
	unsigned char *p = s;

	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t  = nmemb * size;
	void *p = malloc(t);

	if (!p)
		return  (NULL);
	return (_memset(p, 0, t));
}
