#include "hash_tables.h"

/**
 * key_index - we generate a position for the key not more the size
 * @key: string to convert to key;
 * @size: the array size
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a = hash_djb2(key), t;


	t = a % size;
	return (t);

}
