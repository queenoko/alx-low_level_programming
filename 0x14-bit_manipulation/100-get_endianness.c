#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, else 1 if little endian
 */
int get_endianness(void)
{
	int digit = 1;
	char *endian_bit = (char *)&digit;

	if (*endian_bit == 1)
		return (1);

	return (0);
}
