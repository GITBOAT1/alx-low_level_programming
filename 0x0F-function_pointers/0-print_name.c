#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: string name
 * @f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if  (!name)
		f(NULL);
	else
		f(name);
}
