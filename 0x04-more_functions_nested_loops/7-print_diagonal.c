/*
 * File: 7-print_diagonal.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * print_diagonal - Draw a diagonal line
 * @n: number of \ lines a is len b is space
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
