#include "main.h"

/**
 * _isalpha - print 1 if its lower caxe
 * @c: just a variable for lower cas
 * Return: 0 means sucess
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
