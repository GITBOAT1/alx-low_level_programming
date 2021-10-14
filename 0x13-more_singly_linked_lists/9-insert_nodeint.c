#include "lists.h"

/**
 * insert_nodeint_at_index - just add a node
 * @head: where to start
 * @idx: search indx
 * @n: number to add
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *cur;
	unsigned int i;

	tmp = malloc(sizeof(*head));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	cur = *head;

	if (idx == 0)
	{
	
		tmp->next = cur->next;
		cur->next = tmp;
		*head =cur;
		return (*head);
	}
	for (i = 1; i < idx; i++)
	{
		if (cur == NULL || cur->next == NULL)
			return (NULL);
		cur = cur->next;
	}
	tmp->next = cur->next;
	cur->next = tmp;

	return (cur);
}
