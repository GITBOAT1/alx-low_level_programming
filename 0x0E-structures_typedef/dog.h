#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - this create a struct for dog.
 * @name: the name for the dog
 * @owner: the owner
 * @age:  how old is the dog
 * Return: Always 0.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
