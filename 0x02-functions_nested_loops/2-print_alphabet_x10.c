#include "main.h"
/**
 * print_alphabet_x10 - Prints ten times the alphabet
 *
 * Return: a-z x10
 */
void print_alphabet_x10(void)
{
	int x, y;

	y = 0;

	while (y < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		y++;
		_putchar('\n');
	}
}
