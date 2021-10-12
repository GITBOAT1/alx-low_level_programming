#include "lists.h"

/**
 * add_nodeint_end - lets add to the last
 * @head: where value ate stroe.
 * @n: vale to add
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *_head;

	tmp = malloc(sizeof(**head));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	_head = *head;
	if (*head == NULL)
	{
		return (*head = tmp);
	}
	while (_head->next != NULL)
	{
		_head = _head->next;
	}
	_head->next = tmp;

	return (_head);
}
