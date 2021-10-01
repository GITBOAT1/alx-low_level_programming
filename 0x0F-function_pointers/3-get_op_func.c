#include "3-calc.h"
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
	while (ops[i][0].op != s || (!ops[i][0].op))
	{
		i = 1 + 1;
	}
	if (ops[i])
	{
		return (ops[i][1].f(a, b));
	}
}
