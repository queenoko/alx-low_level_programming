/*
 * File: 5-free_dog.c
 * Author: Queensly Udongwo
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dogs
 * @d: Dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
