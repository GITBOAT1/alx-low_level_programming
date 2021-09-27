#include "dog.h"
/**
 * print_dog - print out the d0g struc
 * @d: arg for the dog struc
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("nil");
	else
		printf("%s\n", d->name);
	if (d->age <= 0)
		printf("nil");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("nil");
	else
		printf("%s\n", d->owner);
}
