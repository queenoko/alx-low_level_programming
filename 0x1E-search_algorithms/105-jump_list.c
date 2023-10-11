#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - The helper to `advanced_binary`,
 * recursively searches for a value in an integer array
 * @array: The pointer to first element of array to seach...
 * @value: value to search for
 * @low: start with index in array
 * @high: ending with index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid_b, z;

	if (!array)
		return (-1);

	mid_b = (low + high) / 2;
	printf("Searching in array: ");
	for (z = low; z <= high; z++)
		printf("%i%s", array[z], z == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid_b] < value)
			return (binary_search_recursion(array, value,
							mid_b + 1, high));
		if (array[mid_b] >= value)
			return (binary_search_recursion(array, value,
							low, mid_b));
	}

	return (-1);
}

/**
 * advanced_binary - This searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size:  number of elements in array
 * @value: value to search for
 *
 * Return: The first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
