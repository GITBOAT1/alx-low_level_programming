#include "lists.h"

/**
 * add_nodeint - just add a node
 * @head: where to start
 * @n: number to add
 * Return: Always 0.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(*head));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (head != NULL)
		tmp->next = *head;
	*head = tmp;
	return (*head);
}
