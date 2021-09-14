#include "main.h"

/**
 * _strchr - print the remaining charaters athr the sarch chart is found.
 * @s : charater to be search
 * @c : the charter we ater searching for
 * Return: - NULL  brakes the loop when answer is found
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
 * _strpbrk - find the search chart is found.
 * @s1 : charater to be search
 * @s2 : the charter we ater searching for
 * Return: always the anser
*/

char *_strpbrk(char *s1, char *s2)
{
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	while (*s1)
	{
		if (_strchr(s2, *s1))
		{
			return (s1);
		}
		else
		{
			s1++;
		}
	}
	return (NULL);
}
