/*
 * File: 100-atoi.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: the integer value of the converted string
 */

int _atoi(char *s)
{
	int sign;
	unsigned int n;
	char *tem;

	tem = s;
	n = 0;
	sign = 1;

	while (*tem != '\0' && (*tem < '0' || *tem > '9'))
	{
		if (*tem == '-')
			sign *= -1;
		tem++;
	}
	if (*tem != '\0')
	{
		do {
			n = n * 10 + (*tem - '0');
			tem++;
		}

		while (*tem >= '0' && *tem <= '9');
	}
	return (n * sign);
}
