/*
 * File: 4-rev_array.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: Number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
