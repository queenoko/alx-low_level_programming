#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - The helper to `advanced_binary`,
 * recursively searches for a value in an integer array
 * @array: pointer to first element of array to sach
 * @value: The value to search for
 * @low: The starting index in array
 * @high: The ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, z;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (z = low; z <= high; z++)
		printf("%i%s", array[z], z == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - This searches for d value in a sorted array of integers
 * using a binary search algorithm.
 * which returns first appearance of `value` in array
 * @array: The pointer to first element of array to search
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low_a = 0;
	size_t high_a = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low_a, high_a));
}
