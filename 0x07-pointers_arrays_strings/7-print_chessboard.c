#include "main.h"

/**
 * print_chessboard - check the code
 * @a1: multidiamentional array
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a1)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a1[a][b]);
		}
		_putchar('\n');
	}
}
