#include <stdio.h>
/**
 * main - Base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char b;

	int x;

	b = 'a';
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
