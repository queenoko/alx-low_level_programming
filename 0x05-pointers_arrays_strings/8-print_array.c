/*
 * File: 8-print_array.c
 * Author: Queensly Udongwo
 */

#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: input array
 * @n: length of array i for index
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	putchar('\n');
}
