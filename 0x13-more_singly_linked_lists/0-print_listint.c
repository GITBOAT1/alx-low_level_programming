#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print out put of the argument
 * @h: the value to print
 * Return: count
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int i;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i = i + 1;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
