/*
 * File: 101-keygen.c
 * Author: Queensly Udongwo
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: 0
 */

int main(void)
{
	char pas[84];
	int i = 0, sum = 0, diff1, diff2;

	srand(time(0));

	while (sum < 2772)
	{
		pas[i] = 33 + rand() % 94;
		sum += pas[i++];
	}

	pas[i] = '\0';

	if (sum != 2772)
	{
		diff1 = (sum - 2772) / 2;
		diff2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff1++;

		for (i = 0; pas[i]; i++)
		{
			if (pas[i] >= (33 + diff1))
			{
				pas[i] -= diff1;
				break;
			}
		}

		for (i = 0; pas[i]; i++)
		{
			if (pas[i] >= (33 + diff2))
			{
				pas[i] -= diff2;
				break;
			}
		}
	}

	printf("%s", pas);

	return (0);

}
