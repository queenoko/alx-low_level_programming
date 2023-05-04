#include "main.h"

/**
 * flip_bits -  number of bits to flip to get from one
 * number to another.
 * @n: Number n
 * @m: Number to flip n to
 *
 * Return: Number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_nm = n ^ m, bits_nm = 0;

	while (xor_nm > 0)
	{
		bits_nm += (xor_nm & 1);
		xor_nm >>= 1;
	}

	return (bits_nm);
}
