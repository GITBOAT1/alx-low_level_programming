#include "main.h"
/**
 * print1 - print  msg;
 * @e: msg argument.
 * Return: returns the counted value
*/
int  print1(char *e)
{
	int i = 0;

	while (e[i] != '\0')
	{

		if (e[i] == -1)
			return (0);
		_putchar(e[i]);
		i = i + 1;
	}
	return (i);
}
