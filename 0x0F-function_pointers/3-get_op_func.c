#include "3-calc.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - the main cal
 *
 * @s: The operator
 * @a: sum a
 * @b: sum b
 * Return: The function associated
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{

		if (strcmp(s, ops[i].op)== 0)
			break;
		i++;


	}

	return (ops[i].f);
}
