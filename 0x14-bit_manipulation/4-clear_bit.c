/*
 * File: 4-clear_bit.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to the bit
 * @index: Index to set the value starting at 0
 *
 * Return: 1 if it works, else -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
