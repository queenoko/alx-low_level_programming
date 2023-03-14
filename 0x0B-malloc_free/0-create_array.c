/*
 * File: 0-create_array.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array to be initialized
 * @c: The specific character to initialize the array with
 *
 * Return: If size == 0 or null if function fails
 * otherwise return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
