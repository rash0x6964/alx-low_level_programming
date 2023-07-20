#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * Description: draws a diagonal line on the terminal
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, l;

	for (row = 0; row < n; row++)
	{
		if (row > 1)
		{
			for (l = 0; l < row; l++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
