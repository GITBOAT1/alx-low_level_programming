#include "dog.h"
/**
 * free_dog - deallocate all memory at exit
 * @d: the memory to deallocate
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
	free(d);
}
