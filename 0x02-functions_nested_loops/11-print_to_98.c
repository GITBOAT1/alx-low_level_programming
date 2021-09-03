#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code for ALX School students.
 * @n : hold the value for the user which was entered
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n > 98; n--)
		{
			printf("%d ", n);
		}
	}
}
