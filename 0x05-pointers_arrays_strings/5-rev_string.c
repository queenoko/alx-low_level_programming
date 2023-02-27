/*
 * File: 5-rev_string.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string reversed
 */
void rev_string(char *s)
{
	int m = 0, index = 0;
	char temp;

	while (s[index++])
		m++;

	for (index = m - 1; index >= m / 2; index--)
	{
		temp = s[index];
		s[index] = s[m - index - 1];
		s[m - index - 1] = temp;
	}
}
