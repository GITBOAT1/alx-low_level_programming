#include "hash_tables.h"

/**
 * hash_table_set - this is where we store the valuse and keys
 * @ht: the head
 * @key: for the index
 * @value: stores the valuse
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0)
		return (0);
	k = key_index((unsigned char *)key, sizeof(ht));

	if (ht->array[k] != NULL)
	{
		hash_node_t *node = malloc(sizeof(hash_node_t)), *tmp;

		if (!node)
		{
			return (0);
		}

		tmp = ht->array[k];
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->key = strdup(key);
		tmp->value = strdup(value);
		tmp->next = ht->array[k];
		ht->array[k] = tmp;
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->array[k] = node;
	return (1);
}
