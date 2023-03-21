/*
 * File: 4-new_dog.c
 * Author: Queensly Udongwo
 */

#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Find the length of a string
 * @str: String to be measured
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src
 * @dest: Bufffer storing the string copy
 * @src: Source of string
 * Return: Pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates anew dog
 * @name: Nmae of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Return: The new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogn;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogn = malloc(sizeof(dog_t));
	if (dogn == NULL)
		return (NULL);

	dogn->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogn->name == NULL)
	{
		free(dogn);
		return (NULL);
	}

	dogn->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogn->owner == NULL)
	{
		free(dogn->name);
		free(dogn);
		return (NULL);
	}

	dogn->name = _strcopy(dogn->name, name);
	dogn->age = age;
	dogn->owner = _strcopy(dogn->owner, owner);

	return (dogn);
}
