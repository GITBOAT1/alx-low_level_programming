#include "lists.h"


/**
 * sum_listint - simpe func to free all nodes
 * @head: the list for freeing.
 * Return: the sum of all n in list,
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
