/*
 * File: 3-mul.c
 * Author: Queensly Udongwo
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if program recieve two arguments
 * -1 if program does not recieve two arguments
 */

int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);

	return (0);

}
