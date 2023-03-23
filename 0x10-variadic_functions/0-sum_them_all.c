/*
 * File: 0-sum_them_all.c
 * Author: Queensly Udongwo
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum
 *
 * Return: If n == 0 - 0, else the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);

}
