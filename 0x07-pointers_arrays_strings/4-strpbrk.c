#include "main.h"

/**
 * _strpbrk - Searches a string for any of the set of bytes
 * The _strpbrk() function locates the first occurence in the string s
 * of any of the bytes in the string accept
 *
 * @s: Input string
 * @accept: String to locate
 *
 * Return: Returns  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
