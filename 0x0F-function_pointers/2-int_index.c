/*
 * File: 2-int_index.c
 * Author: Queensly Udongwo
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array of integers
 * @size: size af an array
 * @cmp: Ponter to the function used to compare values
 *
 * Return: If no of element or size <= 0 - -1
 * else - the index of the first element for cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
