#include "main.h"

/**
 * set_bit - function that sets value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: Index to set the value, starting at 0
 *
 * Return: -1 if error occurs else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
