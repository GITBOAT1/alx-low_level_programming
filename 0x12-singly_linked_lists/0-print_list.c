#include "lists.h"
/**
 * print_list - this print nodes
 * @h: the node for printing.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *tmp;

	i = 0;
	tmp =  h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nill)\n");
		else
		{
			printf("[%d] ", tmp->len);
			printf("%s\n", tmp->str);
		}
		tmp = tmp -> next;
		i++;
	}
	return (i);
}
