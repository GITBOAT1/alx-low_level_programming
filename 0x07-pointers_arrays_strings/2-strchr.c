#include "main.h"

/**
 * _strchr - print the remaining charaters athr that is found.
 * @s : charater to be search
 * @c : the charter we ater searching for
 * Return: always to char
*/

char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if ((*s == c) || ( c == '\0'))
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
