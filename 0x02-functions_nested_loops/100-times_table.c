#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_times_table - prnt the time table.
 * @n:	the value multiply
 * Return: void returns nothing.
 */

void print_times_table(int n)
{
	int j = 0, i = 0, table = 0, len, l;
	char str[5];

	if (n > 0 && n < 15)
	{
		for (j = 0; j < n + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				table = i * j;
				sprintf(str, "%d", table);
				len = strlen(str);
				for (l = 0; l < len; l++)
					_putchar(str[l] + 0);
				if (i < n)
				{
					_putchar(',');
					if (((table) >= 0 && table <= 8) && ((i + 1) * j <= 9))
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (((table) >= 0 && (table) <= 98) && ((i + 1) * j >= 100))
						_putchar(' ');
					else if (((table) >= 0 && (table) <= 98) && ((i + 1) * j >= 9))
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
		if (j < n)
			_putchar('\n');
	}

}
