#include "main.h"

/**
 * get_endianness - this tells if it big or small endinness.
 *
 * Return: 1 if its small  and 0 if its big.
*/
int get_endianness(void)

{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	return (0);
}
