#include "main.h"
/**
 * print_number - print a number
 * @n:int
 * print_number: print a number
 *
 * Return: int
 */
void print_number(int n)
{
	unsigned int x;
	unsigned int y;
	int i;
	int counter;
	int z;

	z = 0;
	i = 1;
	x = n;
	y = n;
	counter = 0;

	if (n == 0)
		_putchar ('0');
	if (n < 0)
	{
		_putchar ('-');
		x = x * -1;
		y = y * -1;
	}

	while (y > 0)
	{
		y = y / 10;
		counter++;
	}

	for (z = 1; z < counter; z++)
	{
		i = i * 10;
	}
	for (z = 0; z < counter; z++)
	{
		_putchar(x / i + '0');
		x = x % i;
		i = i / 10;
	}
}
