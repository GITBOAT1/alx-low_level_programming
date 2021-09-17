#include <stdio.h>

/**
 * main - check the code
 * @argc: the counter for argv
 * @argv: input to the program
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc < 0)
	{
		return (-1);
	}
	printf("%s\n", argv[0]);

	return (0);
}
