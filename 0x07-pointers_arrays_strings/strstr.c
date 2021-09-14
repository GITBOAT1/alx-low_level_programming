#include "main.h"

/**
 * _strpbrk - check the code
 * @s : the string to searvh through
 * @accept: the substring to use
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	char *substr = accept;

	while (*s)
	{
		while (*s && *accept && *s == *substr)
		{
			s++;
			substr++;

		}
		if (!*substr)
			retrun st;
		s = st + 1;
	}
	return  (NULL);
}
