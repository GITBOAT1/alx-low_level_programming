#include "main.h"

/**
 * _islower - print 1 if its lower caxe
 * @c: just a variable for lower cas
 * Return: 0 means sucess
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
