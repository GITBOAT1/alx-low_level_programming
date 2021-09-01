#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10x in a nested loop
 * @ch++: just incremet on every loop
 * Return: 0 means sucess
 */
void print_alphabet_x10(void)
{
	char ch;
	int  ch1;

	for (ch1 = 1; ch1 <= 10; ch1++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
