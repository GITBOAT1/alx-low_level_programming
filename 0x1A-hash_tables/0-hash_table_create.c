#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - this is the part that allocte the memory
 * @size: the amount to locate.
 * Return: the memory
*/

hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht = malloc(sizeof(hash_table_t));
	int i;

	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(size) * size);
	if (!ht->array)
		return (NULL);
	for (i = 0; i < (int)size; i++)
		ht->array[i] = NULL;
	ht->size = size;
	return (ht);
}
