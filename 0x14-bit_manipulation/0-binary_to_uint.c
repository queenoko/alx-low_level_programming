/*
 * File: 0-binary_to_uint.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * binary_to_unit - function that converts a binary
 * number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: 0 if b is NULL or contains chars not 0 or 1, else the
 * the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	int ind;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (ind = 0; b[ind]; ind++)
	{
		if (b[ind] < '0' || b[ind] > '1')
			return (0);
		val = 2 * val + (b[ind] - '0');
	}

	return (val);
}
