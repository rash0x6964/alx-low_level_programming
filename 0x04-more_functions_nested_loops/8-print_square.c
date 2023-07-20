#include "main.h"

/**
 * print_square -  prints a square, followed by a new line.
 * Description:  prints a square, followed by a new line.
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	int row, column;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			_putchar('#');
		}
		if (row != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
