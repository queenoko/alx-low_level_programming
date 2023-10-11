#include "search_algos.h"
#include <math.h>

/* when compiling math.h in gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - This returns the minimum of two size_t values
 * @a: The first value
 * @b: The second value
 *
 * Return: `a` if lower than or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - This will searches for a value in a sorted array
 * of integers using a jump search algorithm
 * @array: The pointer to first element of array to search
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low_j, high_j, jump_j;

	if (!array || size == 0)
		return (-1);

	jump_j = sqrt(size);

	for (high_j = 0; high_j < size && array[high_j] < value;
	     low_j = high_j, high_j += jump_j)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high_j, array[high_j]);
	}

	/* The print causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", low_j, high_j);

	for (; low_j <= min(high_j, size - 1); low_j++)
	{
		printf("Value checked array[%lu] = [%d]\n", low_j, array[low_j]);
		if (array[low_j] == value)
			return (low_j);
	}

	return (-1);
}
