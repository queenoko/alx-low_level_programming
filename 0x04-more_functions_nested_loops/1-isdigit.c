/*
 * File: 1-isdigit.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * _isdigit - Checks digit (0 through 9)
 * @c: The number to be checked
 *
 * Return: 1 if number is a digit, 0 not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
