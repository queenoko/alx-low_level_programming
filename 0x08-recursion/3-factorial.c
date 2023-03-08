/*
 * File: 3-factorial.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: The number to find the factorial
 *
 * Return: If n > 0 - the factorial of n
 * If n < 0 - 1 to indicate error
 */

int factorial(int n)
{
	int fac = n;

	if (n < 0)
	{
		return (-1);
	}

	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	fac *= factorial(n - 1);

	return (fac);
}
