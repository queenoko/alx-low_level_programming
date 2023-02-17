#include <stdio.h>
/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char m;

	m = 'a';
	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
