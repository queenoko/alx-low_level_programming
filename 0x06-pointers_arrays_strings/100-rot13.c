/*
 * File: 100-rot13.c
 * Author: Queensly Udongwo
 */

#include "main.h"
/**
 * rot13 -  function that encodes a string using rot13.
 * @st: input string
 * Return: string converted to rot13
 */
char *rot13(char *st)
{
	int ind1 = 0, ind2;
	char alp1[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			 'G', 'H', 'I', 'J', 'K', 'L',
			 'M', 'N', 'O', 'P', 'Q', 'R',
			 'S', 'T', 'U', 'V', 'W', 'X',
			 'Y', 'Z', 'a', 'b', 'c', 'd',
			 'e', 'f', 'g', 'h', 'i', 'j',
			 'k', 'l', 'm', 'n', 'o', 'p',
			 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z'};
	char alp2[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			 'T', 'U', 'V', 'W', 'X', 'Y',
			 'Z', 'A', 'B', 'C', 'D', 'E',
			 'F', 'G', 'H', 'I', 'J', 'K',
			 'L', 'M', 'n', 'o', 'p', 'q',
			 'r', 's', 't', 'u', 'v', 'w',
			 'x', 'y', 'z', 'a', 'b', 'c',
			 'd', 'e', 'f', 'g', 'h', 'i',
			 'j', 'k', 'l', 'm',};

	while (st[ind1])
	{
		for (ind2 = 0; ind2 < 52; ind2++)
		{
			if (st[ind1] == alp1[ind2])
			{
				st[ind1] = alp2[ind2];
				break;
			}
		}

		ind1++;
	}
	return (st);

}
