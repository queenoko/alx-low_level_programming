/*
 * File: 9-strcpy.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: buffer to copy string to
 * @src: source string to copy
 * Return: pointer to destination string @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);

}
