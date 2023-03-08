/*
 * File: 4-pow_recursion.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the
 * power of y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	res *= _pow_recursion(x, y - 1);

	return (res);
}
