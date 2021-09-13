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
