/*
 * File: 2-strlen.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: String to get the lenght
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
