/*
 * File: 5-string_toupper.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @up: input string
 * Return: lowercase changed to uppercase
 */

char *string_toupper(char *up)
{

	int i = 0;
	int c = 'a' - 'A';

	for (i = 0; up[i] != '\0'; ++i)
	{
		if (up[i] >= 'a' && up[i] <= 'z')
		{
			up[i] = up[i] - c;
		}
	}
	return (up);
}
