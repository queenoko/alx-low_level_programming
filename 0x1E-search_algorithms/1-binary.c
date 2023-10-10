#include "search_algos.h"

/**
 * binary_search - This searches for value
 * in an integer array using a binary
 * search algorithm, not guaranteed return
 * lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low_s, mid_s, high_s;
	int z;

	if (array == NULL)
	{
		return (-1);
	}

	low_s = 0;
	high_s = size - 1;

	while (low_s <= high_s)
	{
		mid_s = (low_s + high_s) / 2;

		printf("Searching in array: ");
		for (z = low_s; x <= high_s; z++)
			printf("%i%s", array[z], x == high_s ? "\n" : ", ");

		if (array[mid_s] < value)
			low_s = mid_s + 1;
		else if (array[mid_s] > value)
			high_s = mid_s - 1;
		else
			return (mid_s);
	}

	return (-1);
}
