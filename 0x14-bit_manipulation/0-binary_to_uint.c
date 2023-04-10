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
	unsigned int n = 0, m = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		n += (b[length] - '0') * m;
		m *= 2;
	}

	return (n);
}
