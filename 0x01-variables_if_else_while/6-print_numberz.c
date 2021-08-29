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
	char array[] = "0123456789";
        /**
	 *Alphabets from 1 -10
	 * @ch++: this increment the data
	 */


	for (ch = 0; ch <= 9; ch++)
	{
		putchar(array[ch]);
	}
	putchar('\n');
	return (0);
}
