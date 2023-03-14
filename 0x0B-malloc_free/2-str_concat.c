/*
 * File: 2-str_concat.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: String to be concatinated
 * @s2: String to be concatinated to s1
 *
 * Return: NULL if concatenation fails
 * Otherwise - a pointer the newly allocated space in memory containing
 * the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int i, con_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	con_str = malloc(sizeof(char) * len);

	if (con_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con_str[con_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		con_str[con_i++] = s2[i];

	return (con_str);

}
