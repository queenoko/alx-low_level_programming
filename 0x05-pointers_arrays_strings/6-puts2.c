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
	int b;

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}

	_putchar('\n');
}
