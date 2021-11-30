#include "main.h"


/**
 * _strspn - return the the length of the\
 * @s : the null terminated string to be scanned
 * @accept : the string containing the char match
 * @s: ggghhhj
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (0);
	}

	while (*s && _strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
