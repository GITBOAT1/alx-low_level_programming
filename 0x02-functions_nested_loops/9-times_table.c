#include "main.h"

/**
 * void jack_bauer - print the alphabet 10x in a nested loop
 * @ch++: just incremet on every loop
 * Return: 0 means sucess
 */
void times_table(void)
{
	int hr, la, se;

	se = 0, hr = 0, la = 0;
	for (hr = 0; hr <= 9; hr++)
	{
		for (la = 0; la <= 9; la++)
		{

			se = hr * la;
			printnumber(se);
			if (la < 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((la == 8) && (se == 8 || se == 0))
				    _putchar(' ');
			}
			if (se <= 2)
			{
				if ((la == 8 || la == 9) && (se == 9 || se == 0))
					continue;
			else
					_putchar(' ');
			}
			if ((hr == 1) && (la >= 3 && la <= 7))
				putchar(' ');
			if ((hr == 2) && (la >= 2 && la <= 3))
				_putchar(' ');
			if ((hr == 4) && (la == 1))
				_putchar(' ');
			if ((hr == 3) && (la >= 1 && la <= 2))
				_putchar(' ');



		}
		_putchar('\n');
	}
}

void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
