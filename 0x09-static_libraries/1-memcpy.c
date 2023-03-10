#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * The _memcpy() function copies n bytes from aea src to memory ares dest
 *
 * @dest: This is the output string
 * @src: Input string
 * @n: number of bytes to copy
 *
 * Return: string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	char *pDest = dest;
	char const *pSrc = src;

	for (count = 0; count < n; count++)
	{
		*pDest++ = *pSrc++;
	}

	return (dest);
}
