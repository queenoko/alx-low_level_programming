#include <stdio.h>
/**
 * main - Prints Reverse Alphabets
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char r;

	r = 'z';
	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
