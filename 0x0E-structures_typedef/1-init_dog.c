/*
 * File: 1-init_dog.c
 * Author: Queensly Udongwo
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Dog to be initialized
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
