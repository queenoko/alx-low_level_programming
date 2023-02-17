#include <stdio.h>
/**
 * main - Prints combinations of two two digit numbers ranging from 0 to 99
 *
 * Return: Always 0 (success)
 */

iny main(void)
{
	int i, j;

	for (i = 0; i <= 98; num++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
