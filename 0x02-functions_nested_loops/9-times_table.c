#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: nothing
 */

void times_table(void)
{
	int row, column, res, tens, ones;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			res = row * column;
			tens = res / 10;
			ones = res % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
