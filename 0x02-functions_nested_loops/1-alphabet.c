#include "main.h"

/**
 * print_alphabet - print the alphabet
 * @ch++: just incremet on every loop
 * Return: 0 means sucess
 */

int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
