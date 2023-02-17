#include <stdio.h>
/**
 * main -  Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int e;

	for (e = 0; e < 10; e++)
	{
		putchar(e + '0');
		if (e < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

