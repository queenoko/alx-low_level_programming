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
	int len = 0;
	int o;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	for (o = len; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}

}
