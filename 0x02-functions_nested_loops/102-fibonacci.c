#include <stdio.h>
 #include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0;
 */

int main(void)
{
	long int fib = 0;
	long int i, old = 1, new = 2;

	printf("%ld, %ld, ", old, new);
	for (i = 1; i < 49; i++)
	{
		fib = old + new;
		old = new;
		new = fib;
		printf("%ld", labs(fib));
		if (i != 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
