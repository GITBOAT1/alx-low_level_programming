#include "dog.h"

/**
 * new_dog - check the code
 * @name: name of the dog
 * @age:  how old the dog is
 * @owner: the owner of the dog.
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	d->name = name;
	d->age  = age;
	d->owner = owner;
	return (d);
}
