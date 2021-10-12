#include "lists.h"

/**
 * listint_len - func to return the count
 * @h: variable for the head
 * Return: the length.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i = i + 1;
		h = h->next;
	}
	return (i);
}
