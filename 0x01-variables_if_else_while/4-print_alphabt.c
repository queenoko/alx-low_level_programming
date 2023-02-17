#include <stdio.h>
/**
 * main - Print all letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char b;

	b  = 'a';
	while (b <= 'z')
	{
		if ((b != 'q' && b != 'e') && b <= 'z')
			putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

