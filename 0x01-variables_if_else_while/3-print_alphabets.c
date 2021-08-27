#include <stdio.h>
/**
 * main - controls the flow of program
 * @void: is an empty variable
 * Return: this tell if program was succesful or nut
 */

int main(void)
{

	char ch;
	/**
	 *Alphabets from a - z
	 * @ch++: this increment the data
	 */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}

	/**
	 *Alphabets from A - Z
	 * @ch++: this increment the data
	 */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
