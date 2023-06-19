/*
 * File: 3-strcmp.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * _strcmp - Function that compares pointers to two string
 * @s1: first sring
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
