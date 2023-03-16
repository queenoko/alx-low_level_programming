/*
 * File: 3-array_range.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an integer ordered from min to max
 * @min: first value of the array
 * @max: last value of the array
 *
 * Return: If min > max of function fails - NULL
 * Otherwise - a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
