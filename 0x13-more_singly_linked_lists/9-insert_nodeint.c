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
	listint_t *tmp, *cur, tmp1;

	tmp = malloc(sizeof(*head));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	cur = *head;
	for (i = 0; i < idx; i++)
	{
		if (cur != NULL)
			return (NULL);
		cur = cur->next;
	}
	tmp1 = cur->next;
	cur->next = tmp;
	cur->next = tmp1;
	*head = cur;
	return (*head);
}
