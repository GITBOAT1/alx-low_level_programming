#include "lists.h"


/**
 * pop_listint - pop func to free a nodes
 * @head: the list for freeing.
 *
 */

int pop_listint(listint_t **head)
{
	listint_t  *tmp, *_head;
	int n;

	n = 0;
	tmp = NULL;
	_head = *head;
	if (_head ==  NULL)
		return (0);
	tmp = _head->next;
	n = _head->n;
	free(_head);
	_head = tmp;
	*head = _head;
	return (n);

}
