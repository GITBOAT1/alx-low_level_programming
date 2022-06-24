#include <stdio.h>

/**
 * main - print out multiples of 3 or 5 below 1024
 *
 * Return: 0;
 */

int main(void)
{
	int count = 1025, three = 3, five = 5, i, value = 0;

	for (i = 1; i < count; i++)
	{
		if ((i % three == 0) || (i % five == 0))
		{
			value = value + i;
		}
	}
	printf("%d", value);
	printf("\n");
	return (0);
}
