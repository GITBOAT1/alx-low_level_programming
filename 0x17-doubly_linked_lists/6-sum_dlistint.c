#include "lists.h"
/**
 * sum_dlistint - sum of elements of a list
 * @head: pointer to first node
 * Return: integer sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
