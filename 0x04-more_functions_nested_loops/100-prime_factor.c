/*
 * File: 100-prime_factor.c
 * Author: Queensly Udongwo
 */
#include <stdio.h>
/**
 * main - Find and print the largest prime factor 612852475143  x is prime
 * Return: 0
 */
int main(void)
{
	long x = 612852475143, y;

	while (y < (x / 2))
	{
		if ((x % 2) == 0)
		{
			x /= 2;
			continue;
		}
		for (y = 3; y < (x / 2); y += 2)
		{
			if ((x % y) == 0)
				x /= y;
		}
	}
	printf("%ld\n", x);

	return (0);
}

