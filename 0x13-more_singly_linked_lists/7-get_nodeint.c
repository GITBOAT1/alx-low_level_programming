#include "lists.h"

/**
 * get_nodeint_at_index - get a nod location
 * @head: the list for freeing.
 * @index: the search state
 * Return: the location of the value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (head->next == NULL)
		return (NULL);
	return (head);
}
