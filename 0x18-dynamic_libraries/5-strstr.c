#include "main.h"

/**
 * _strstr - check the code
 * @s : the string to searvh through
 * @accept: the substring to use
 * Return: Always 0.
 */

char *_strstr(char *s, char *accept)
{

	while (*s)
	{
		char *st = s;
		char *substr = accept;

		while (*s && *accept && *s == *substr)
		{
			s++;
			substr++;

		}
		if (!*substr)
			return (st);
		s = st + 1;
	}
	return  (NULL);
}
