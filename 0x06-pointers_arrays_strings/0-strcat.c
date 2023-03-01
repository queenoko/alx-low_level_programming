/*
 * File: 0-strcat.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: A pointer to the string to be concatinated
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest1 = 0;

	while (dest[i++])
		dest1++;

	for (i = 0; src[i]; i++)
		dest[dest1++] = src[i];

	return (dest);
}
