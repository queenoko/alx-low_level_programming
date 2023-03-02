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
	int ind1 = 0, ind2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (rep[ind1])
	{
		for (ind2 = 0; ind2 <= 7; ind2++)
		{
			if (rep[ind1] == leet[ind2] ||
			    rep[ind1] - 32 == leet[ind2])
				rep[ind1] = ind2 + '0';
		}

		ind1++;

	}

	return (rep);

}

