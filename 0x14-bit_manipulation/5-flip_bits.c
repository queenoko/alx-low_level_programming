/*
 * File: 5-flip_bits.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: Number
 * @m: Number to flip n to
 *
 * Return: Number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exor = n ^ m, numBits = 0;

	while (exor > 0)
	{
		numBits += (exor & 1);
		exor >>= 1;
	}

	return (numBits);
}
