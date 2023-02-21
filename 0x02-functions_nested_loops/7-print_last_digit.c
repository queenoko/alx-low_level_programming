#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @ldn: last digit of a number, pd prints last digit
 * Return: last digit
 */

int print_last_digit(int ldn)
{
	int pd;

	pd = (ldn % 10);

	if (pd < 0)
	{
		pd = (-1 * pd);
	}
	_putchar(pd + '0');
	return (pd);
}
