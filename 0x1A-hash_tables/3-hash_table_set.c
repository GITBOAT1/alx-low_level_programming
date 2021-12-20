#include "hash_tables.h"

/**
 * hash_table_set - this is where we store the valuse and keys
 * @key: for the index
 * @value: stores the valuse
 * Return: Always EXIT_SUCCESS.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k;

	if (key == NULL)
		return (0);

	k = key_index((unsigned char *)key, sizeof(ht));

	if (ht->array[k]->key == key)
	{

		hash_node_t *node = malloc(sizeof(hash_node_t)), *tmp;

		if (!node)
		{
			return (0);
		}
		tmp = ht->array[k];
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->key = (char *)key;
		tmp->value = (char *)value;
		tmp->next = ht->array[k];
		ht->array[k] = tmp;
		return (1);
	}
	ht->array[k]->key = (char *)key;
	ht->array[k]->value = (char *)value;
	ht->array[k]->next = NULL;
	return (1);
}
