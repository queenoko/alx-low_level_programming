/*
 * File: 3-puts.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');

}
