/*
 * File: 4-print_rev.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: Input string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (i = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');

}
