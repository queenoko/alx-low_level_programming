/*
 * File: 1-swap.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: First input to be swapped
 * @b: Second input to be swapped
 */

void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
