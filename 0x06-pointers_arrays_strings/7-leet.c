/*
 * File: 7-leet.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @rep: inputn  string
 * Return: string replace to 1337
 */

char *leet(char *rep)
{
	int i, j;
	char low[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char cap[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; rep[1] != '\0'; ++i)
	{

		for (j = 0; j < 5; j++)
		{
			if (rep[i] == low[j] || rep[i] == cap[j])
			{
				rep[i] = num[j];
			}
		}
	}
	return (rep);
}
