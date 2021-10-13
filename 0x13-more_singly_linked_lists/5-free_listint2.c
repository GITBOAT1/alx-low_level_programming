#include "lists.h"


/**
 * free_listint2 - simpe func to free all nodes
 * @head: the list for freeing.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t  *tmp, *_head;

	tmp = NULL;
	_head = *head;
	while (_head != NULL)
	{
		tmp = _head->next;
		free(_head);
		_head = tmp;
	}
	*head = NULL;
}
