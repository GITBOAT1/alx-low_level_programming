#include <stdio.h>

/**
 * main - check the code
 * @argc: the counter for argv
 * @argv: input to the program
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0] == NULL)
	{
		return (-1);
	}
	printf("%d\n", argc);

	return (0);
}
