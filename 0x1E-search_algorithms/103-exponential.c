#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
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
 * binary_search_helper - This searches for a value in an integer array using
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: This pointer points  to first element of array to seach
 * @value: The value to search for
 * @low: The starting index
 * @high: The ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, z;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (z = low; z <= high; z++)
			printf("%i%s", array[z], z == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - This searches for a value in a sorted array
 * of integers using an exponential search algorithm
 * @array: It pointer to first element of array to search
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound_e = 1;

	if (!array || size == 0)
		return (-1);

	while (bound_e < size && array[bound_e] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound_e, array[bound_e]);
		bound_e *= 2;
	}

	low = bound_e / 2;
	high = min(bound_e, size - 1);
	/* The 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
