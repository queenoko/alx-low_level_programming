#include "main.h"

/**
 * get_bit - Gets value of bits of a given index
 * @n: bit
 * @index: The index to get the value, starting at 0
 *
 * Return: If error occurs - -1, else value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
