#include "main.h"

/**
 * jack_bauer - print the alphabet 10x in a nested loop
 * printnumber - It purpose is to only print out num
 * @se++: just incremet on every loop
 * ++: just incremet on every loop
 * @hr++: just incremet on every loop.
 * Return: 0 means sucess
 */
void jack_bauer(void)
{

	int  se, hr;

	se = 0,  hr = 0;
	for (hr = 0; hr <= 23; hr++)
	{
		for (se = 0; se <= 59; se++)
		{
			if (hr >= 1 && hr <= 9)
				_putchar('0');
			printnumber(hr);
			_putchar(':');
			if (se >= 1 && se <= 9)
				_putchar('0');
			printnumber(se);
			_putchar('\n');
		}




	}
}

void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');

	if (n / 10)
		printnumber(n / 10);
	_putchar(n % 10 + '0');
}
