#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: fun param
 * Return: nothing
 */

void print_times_table(int n)
{
	int row, column, res;

	if (n >= 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				res = row * column;

				if (column == 0)
					_putchar('0');
				else if (res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && res < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
