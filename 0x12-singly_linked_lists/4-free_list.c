#include "lists.h"

/**
 * free_list - free all the created nodes
 * @head: the node we need to free;
*/
void free_list(list_t *head)
{
	list_t *tmp, *cur;

	cur = head;
	while (cur->next != NULL)
	{
		tmp = cur->next;
		cur->next = cur->next->next;
		free(tmp->str);
		free(tmp);
	}
	free(cur->str);
	free(cur);
}
