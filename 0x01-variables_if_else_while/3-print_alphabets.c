#include <stdio.h>
/**
 * main - Prints the alphabets both in lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char d;

	char b;

	d = 'a';
	b = 'A';
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
