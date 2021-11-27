#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - delate all node in list
 * @head: nodes to be deleted
 *  Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;



	while  (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
