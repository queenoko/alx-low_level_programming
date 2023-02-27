/*
 * File: 6-puts2.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * puts2 - prints every other string of character
 * @str: input
 */

void puts2(char *str)
{
	int i = 0, m = 0;

	while (str[i++])
		m++;

	for (i = 0; i < m; i += 2)
		_putchar(str[1]);

	_putchar('\n');

}
