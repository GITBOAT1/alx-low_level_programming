#include "dog.h"

/**
 * init_dog - initializing the dog code
 * @d: the struct for the name
 * @name: the init name
 * @age:  the age of the dog
 * @owner: the owner
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
