#include "lists.h"
/**
 * add_node - create a node and initialize it at the end
 * @head:The node to start from
 * @str: the string to store to the node
 * Return: the created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
