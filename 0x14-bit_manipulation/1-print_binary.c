#include "main.h"
/**
 * print_binary - convert binay to int
 * @n: number to conver
 * Return: the dec or 0 when failed
 *Take a binary number as the input
 *Divide the number by 10 and store the remainder into variable rem.
 *decimal_num = decimal_num + rem * base;
 *Initially, the decimal_num is 0, and the base is 1, where the rem variable-
 * - stores the remainder of the number.
 *Divide the quotient of the original number by 10.
 *Multiply the base by 2.
*/
void print_binary(unsigned long int n)
{

	if (n)
	{
		print_binary(n >> 1);
		_putchar((n & 1) ? '1' : '0');
	}
}
