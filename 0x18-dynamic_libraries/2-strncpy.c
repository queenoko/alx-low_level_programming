/*
 * File: 2-strncpy.c
 * Author: Queensly Udongwo
 */
#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: The buffer that stores the string copy
 * @src: The source string
 * @n: Maximum number of bytes to be copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src1 = 0;

	while (src[i++])
		src1++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src1; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
