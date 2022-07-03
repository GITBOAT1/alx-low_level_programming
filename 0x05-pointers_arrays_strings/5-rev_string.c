#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * rev_string  - check the code
 * @s: the is the suppled words to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	size_t len =  strlen(s), i = 0, j = len - 1;
	char *tmp = malloc(len + 1);


	strcpy(tmp, s);
	for (i = 0; i < len; i++)
	{
		s[i] = tmp[j];
		j--;
	}

	free(tmp);
}
