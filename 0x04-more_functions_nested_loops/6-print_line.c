/*
 * File: 6-print_line.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * print_line - Draw a straight line
 * @n: number of straight line
 */

void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}
	_putchar('\n');
}
