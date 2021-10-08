#include "lists.h"
/**
 * list_len - this print nodes
 * @h: the node for printing.
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	i = 0;
	tmp =  h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
