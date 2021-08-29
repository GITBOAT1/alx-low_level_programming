#include <stdio.h>
#include <assert.h>
/**
 * main - controls the flow of program
 * @void: is an empty variable
 * Return: this tell if program was succesful or nut
 */

int main(void)
{

	unsigned int ch;
        /**
	 *Alphabets from 1 -10
	 * @ch++: this increment the data
	 */


	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
