/*
 * File: 5-sqrt_recursion.c
 * Author: Queensly Udongwo
 */

#include "main.h"

int find_sqrt(int m, int r);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square of an inputted number
 * @m: The number to find the square root
 * @r: the root to be tested
 *
 * Return: if the number has a natural sqaure root - the square root
 * If the number does not have a natural square root -1
 *
 */
int find_sqrt(int m, int r)
{
	if ((r * r) == m)
		return (r);

	if (r == m / 2)
		return (-1);

	return (find_sqrt(m, r + 1));

}
/**
 * _sqrt_recursion - Retuens the natural square root of a number
 * @n: The number to return the square root of
 *
 * Return: If n has a natural square root - the natural square root of n
 * if n does not have a natural square root -1
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, r));
}
