#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * getnode - a simple function to return a created node
 * @a: this is a value for initializing
 * Return: the created node
 */


dlistint_t *getnode(int a)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
	{
		dprintf(2, "Error: can't malloc\n");
		return (EXIT_FAILURE);
	}
	newNode->n = a;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}
