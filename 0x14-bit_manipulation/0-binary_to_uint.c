#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to string containing binary number
 *
 * Return: unsigned int with decimal value of bianry
 * digit, erroe if 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
