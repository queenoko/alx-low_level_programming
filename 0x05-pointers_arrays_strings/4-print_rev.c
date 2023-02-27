/*
 * File: 4-print_rev.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: Input string
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (*s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(*s[i]);

	_putchar('\n');

}
