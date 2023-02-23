/*
 * File: 4-print_most_numbers.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * print_most_numbers - prints number 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && num != 4)
		{
			_putchar((num % 10) + '0');
		}
	}

	_putchar('\n');
}

