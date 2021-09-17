#include <stdio.h>

/**
 * main - check the code
 * @argc: the counter for argv
 * @argv: input to the program
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc < 0)
	{
		return (-1);
	}

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
