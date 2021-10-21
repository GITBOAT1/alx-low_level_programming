#include "main.h"
/**
 * err - print error msg;
 * @e: msg argument.
 * @a: print the return value of the fd
 * @n: print new line
 * Note this service as p[rinting error to stdou.
 * this func culd be impove by using varadict (late)
*/
void err(char *e, char *a, char *n)
{
	int i = 0;

	while (e[i] != '\0')
	{
		_putchar(e[i]);
		i = i + 1;
	}
	i = 0;
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i = i + 1;
	}
	_putchar(n[0]);
}
