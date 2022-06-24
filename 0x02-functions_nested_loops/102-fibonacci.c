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
	int fib = 0;
	int i, old = 1, new = 2;

	printf("%d, %d\n", old, new);
	for (i = 1; i < 51; i++)
	{
		fib = old + new;
		old = new;
		new = fib;
		printf("%d", abs(fib));
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
