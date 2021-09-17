#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: the counter for argv
 * @argv: input to the program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int tw5, ten, fi, two, one, sum, i;

	tw5 = 25, ten = 10, fi = 5, one = 1, two = 2, i = 0;
	if (argc == 2)
	{
		sum = atoi(argv[1]);
		if (sum < 0)
		{
			printf("0\n");
			return (0);
		}
		while (sum > 0)
		{
			if (sum >= tw5)
			{
				sum = sum - tw5;
			}
			else if (sum >= ten)
			{
				sum = sum - 10;
			}
			else if (sum >= fi)
				sum = sum - fi;
			else if (sum >= two)
				sum = sum - two;
			else
			{
				sum = sum - one;
			}
			i = i + 1;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		printf("%d\n", i);
	return (0);

}
