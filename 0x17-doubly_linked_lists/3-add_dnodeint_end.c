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
		return (NULL);
	}
	newNode->n = a;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}

/**
 * add_dnodeint_end- check the code
 * @head: pointer to a location
 * @n: data to store at tail
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = getnode(n);
	dlistint_t *h = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}

	h->next = newNode;
	newNode->prev = h;
	newNode->next = NULL;
	return (h);
}
