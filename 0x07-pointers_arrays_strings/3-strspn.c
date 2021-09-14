#include "main.h"



/**
 * _strchr - print the remaining charaters athr the sarch chart is found.
 * @s : charater to be search
 * @c : the charter we ater searching for
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

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
