/*
 * File: 3-print_numbers.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * print_numbers - prints numbers from 0-9
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar((a % 10) + '0');
	}

	_putchar('\n');
}
