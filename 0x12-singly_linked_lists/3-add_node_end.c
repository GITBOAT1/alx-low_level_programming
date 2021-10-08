#include "lists.h"
/**
 * add_node_end - create a node and initialize it at the end
 * @head:The node to start from
 * @str: the string to store to the node
 * Return: the created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *cur;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = new_node;
	}
		return (*head);

}
