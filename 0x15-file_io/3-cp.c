#include <stdlib.h>
#include "main.h"
#include "3-cp1.c"
#include "_putchar.c"
#include "err.c"

/**
 * main - check the code
 * @ac: - number of arg on commanline.
 * @av: - Holds the valuse from the command line
 * Return: Always 0.
 */

int main(int ac, char **av)
{

	if (ac != 3)
	{
		err("Usage: cp file_from file_to", (" "), "\n");
		exit(97);
	}
	op_cp(av[1], av[2]);

	return (0);

}
