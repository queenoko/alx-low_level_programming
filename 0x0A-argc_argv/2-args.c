/*
 * File: 2-args.c
 * Author: Queensly Udongwo
 */

#include <stdio.h>

/**
 * main - Prints all argument it recieves
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointer to the argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);

}
