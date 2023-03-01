/*
 * File: 1-strncat.c
 * Author: Queensly Udongwo
 */
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: String to be appended upon
 * @src: String to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest1 = 0;

	while (dest[i++])
		dest1++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest1++] = src[i];

	return (dest);
}
