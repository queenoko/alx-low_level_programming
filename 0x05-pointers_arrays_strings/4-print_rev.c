/*
 * File: 4-print_rev.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: Input string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
