#include <stdio.h>
/**
 * main - controls the flow of program
 * @void: is an empty variable
 * Return: this tell if program was succesful or nut
 */

int main(void)
{

	int ch;
	/**
	 *print out digit from 1 - 10
	 * @ch++: this increment the data
	 */
	for (ch = 1; ch <= 9; ch++)
	{
		printf("%d", ch);
	}
	putchar('\n');
	return (0);
}
