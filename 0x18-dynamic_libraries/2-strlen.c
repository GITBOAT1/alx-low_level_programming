#include "main.h"
/**
 * _strlen - check the code
 *
 * @s: values of characters to be count
 *
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
		if (s[i] == '\n')
			break;
	}
	return (i);
}
