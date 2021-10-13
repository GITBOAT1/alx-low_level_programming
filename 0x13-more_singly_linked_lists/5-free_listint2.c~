#include "lists.h"


/**
 * free_listint - simpe func to free all nodes
 * @head: the list for freeing.
 *
 */

void free_listint(listint_t *head)
{
	listint_t  *tmp;

	tmp = NULL;
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	head = NULL;
}
