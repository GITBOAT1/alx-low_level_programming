#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 at
 */

int main(void)
{
	char *Dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, Dora, strlen(Dora));

	return (1);
}
