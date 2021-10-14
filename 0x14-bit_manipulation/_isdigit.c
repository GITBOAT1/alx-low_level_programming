#include "main.h"
/**
 * _isdigit - check if a value is a number
 * @a: the value to check
 * Return: 1 on sucess 0 on fail
*/
int _isdigit(char a)
{
	if ((a >= '0') && (a <= '9'))
		return (1);
	return (0);
}
