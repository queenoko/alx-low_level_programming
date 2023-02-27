/*
 * File: 7-puts_half.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: Input i is index, h is half
 */
void puts_half(char *str)
{
	int i, h;

	i = 0;
	while (str[i] != '\0')
		i++;

	h = i / 2;

	if (i % 2 == 1)
		h++;

	while (h < i)
	{
		_putchar(str[h]);
		h++;
	}

	_putchar('\n');
}
