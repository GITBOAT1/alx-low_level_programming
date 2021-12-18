#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_creat - this is the part that allocte the memory
 * @size: the amount to locate.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    ht->array = malloc(sizeof(size) * size);
    return (ht);
}
