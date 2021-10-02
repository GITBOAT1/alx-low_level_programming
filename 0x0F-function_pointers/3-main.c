#include "3-calc.h"

/**
 * main - check the code
 * @argc:
 * @argv:
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum;
	char *op;

	printf("main argc %d\n", argc);
	if(!argv || argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	sum = (get_op_func(op))(num1, num2);
	printf("%d\n",sum);
	return (0);
}
