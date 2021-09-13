#include <stdio.h>
#include "main.h"

/**
 * _strcmp -compare two strings
 * @s1: the destination string
 * @s2: the source to which we will append.
 *   : the number of times we need to append the src
 * Return: Always 0.
 */

int _strcmp(char *s1,  char *s2)
{
	return (*s1 - *s2);
}
