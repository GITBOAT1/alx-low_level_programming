#include "main.h"
/**
 * swap_int - check the code
 *
 * @a: values to be swaps
 * @b: values to be swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tm;

	tm = *a;
	*a  = *b;
	*b  = tm;
}
