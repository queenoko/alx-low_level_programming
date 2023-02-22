#include <stdio.h>
/**
 * main - prints natural numbers below 10 that are multiples of 3
 *
 * Return: Always (Success)
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
