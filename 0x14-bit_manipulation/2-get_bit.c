/*
 * File: 2-get_bit.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: The bit
 * @index: Index to get the value starting from 0
 *
 * Return: -1 if error occurs, else the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
