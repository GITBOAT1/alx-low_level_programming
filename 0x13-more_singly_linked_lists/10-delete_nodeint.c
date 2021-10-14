#include "lists.h"

/**
 * delate_nodeint_at_index - just delate at indwx
 * @head: where to start
 * @idx: search indx
 * 
 * Return: Always 0 on success.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cur;
	unsigned int i;

	cur = *head;
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
	}
	if (cur != NULL)
	{
		tmp = cur->next;
		free(cur);
		cur->next = tmp;
	}
	else
		*head = NULL;

	return (1);
}
