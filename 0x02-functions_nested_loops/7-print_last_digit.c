#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last  digit
 * @Last_digit : just a variable from the input
 * Return: 0 means sucess
 */

int print_last_digit(int Last_digit)
{

	if (Last_digit > 0)
	{
		Last_digit = Last_digit % 10;
		_putchar('0' + abs(Last_digit));
	}
	else if (Last_digit == 0)
	{
		_putchar('0' + abs(Last_digit));
	}
	else
	{
		Last_digit *= -1;
		Last_digit = Last_digit % 10;
		_putchar('0' + abs(Last_digit));
	}
	return (abs(Last_digit));
}
