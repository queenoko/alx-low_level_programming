/*
 * File: 1-strdup.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: The string to be copied
 *
 * Return: If str == NULL or insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);

}
