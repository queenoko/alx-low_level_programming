/*
 * File: 6-is_prime_number.c
 * Author: Queensly Udongwo
 */

#include "main.h"

int is_divisible(int number, int divisor);
int is_prime_number(int n);

/**
 * is_divisible - check if number is divisible
 * @number: number to be checked
 * @divisor: the divisor
 *
 * Return: If the number is divisible - 0
 * if the number is not divisible -1
 */
int is_divisible(int number, int divisor)
{
	if (number % divisor == 0)
		return (0);

	if (divisor == number / 2)
		return (1);

	return (is_divisible(number, divisor + 1));

}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 *
 * Return: If integer is not prime 0
 * if number is prime 1
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divisor));
}
