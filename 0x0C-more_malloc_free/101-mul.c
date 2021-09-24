#include "main.h"

/**
 * print- print numbers
 * @n: is the counter
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * main - prints buffer in hexa
 * @argv: the address of memory to print
 * @argc: the size of the memory to print
 *
 * Return: Nothing.
 */
int main(int argv, char **argc)
{
	char e[] = "Error";
	int l, mul, num, num1;

	printf("hello here");
	l = 0;
	if (argv < 3)
	{
		while (e[l] != '\0')
		{
			_putchar(e[l]);
			l = l + 1;
		}
		_putchar('\n');
		exit(98);
	}

	num  = atoi(argc[1]);
	num1 = atoi(argc[2]);




	mul = num * num1;

	print(mul);

	_putchar('\n');

	return (0);
}
