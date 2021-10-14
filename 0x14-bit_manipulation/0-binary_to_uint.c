#include "main.h"
/**
 * binary_to _uint - convert binay to int
 * @b: number to conver
 * Return: the dec or 0 when failed
 *Take a binary number as the input
 *Divide the number by 10 and store the remainder into variable rem.
 *decimal_num = decimal_num + rem * base;
 *Initially, the decimal_num is 0, and the base is 1, where the rem variable-
 * - stores the remainder of the number.
 *Divide the quotient of the original number by 10.
 *Multiply the base by 2.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, a, i, rem, base;

	i = 0;
	dec = 0;
	base = 1;
	a = 0;
	while (b[i])
	{
		if ((b[i] >= '0') && (b[i] <= '9'))
			i = i + 1;
		else
			return (0);
	}
	i = 0;
	while (b[i] && (b[i] >= '0' && b[i] <= '9'))
	{
		a  = a * 10 + (b[i] - '0');
		i++;
	}
	while (a > -0)
	{
		rem = a % 10;
		dec = dec + rem * base;
		a = a / 10;
		base = base * 2;
	}
	return (dec);
}
