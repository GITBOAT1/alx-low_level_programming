#include "dog.h"
/**
 * print_dog - print out the d0g struc
 * @d: arg for the dog struc
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	printf("%s\n%f\n%s\n", d->name, d->age, d->owner);
}
