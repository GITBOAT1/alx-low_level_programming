#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: values to print out
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count += 1;
	}
	return (count);
}
