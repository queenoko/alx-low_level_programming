/*
 * File: 2-calloc.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of elements
 * @size: bytes size of each array element
 *
 * Return: If nmemb = 0, size = 0, of function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	filler = memo;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memo);
}
