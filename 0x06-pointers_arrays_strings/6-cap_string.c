/*
 * File: 6-cap_string.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @st: String to be capitalized
 * Return: pointer to the changed string
 */

char *cap_string(char *st)
{
	int i = 0;

	while (st[i])
	{
		while (!(st[i] >= 'a' && st[i] <= 'z'))
			i++;

		if (st[i - 1] == ' ' ||
		    st[i - 1] == '\t' ||
		    st[i - 1] == '\n' ||
		    st[i - 1] == ',' ||
		    st[i - 1] == ';' ||
		    st[i - 1] == '.' ||
		    st[i - 1] == '!' ||
		    st[i - 1] == '?' ||
		    st[i - 1] == '"' ||
		    st[i - 1] == '(' ||
		    st[i - 1] == ')' ||
		    st[i - 1] == '{' ||
		    st[i - 1] == '}' ||
		    i == 0)
			st[i] -= 32;

		i++;
	}

	return (st);
}
