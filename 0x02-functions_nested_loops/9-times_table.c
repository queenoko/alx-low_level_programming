#include "main.h"
/**
 * times_table - 9 times table
 * rows, cols, dig - digit of current number
 * Return time table
 */

void times_table(void)
{
	int rows, cols, dig;

	for (rows = 0; rows <= 9; rows++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (cols = 1; cols <= 9; cols++)
		{
			dig = (rows * cols);
			if ((dig / 10) > 0)
			{
				_putchar((dig / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((dig % 10) + '0');

			if (cols < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
