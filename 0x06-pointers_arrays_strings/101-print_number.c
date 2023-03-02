/*
 * File: 101-print_number.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * print_number -  function that prints an integer.
 * @n: Integer to be printed
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');

}
