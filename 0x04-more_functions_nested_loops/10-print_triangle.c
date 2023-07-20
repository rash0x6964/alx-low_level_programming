#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, window, spaces;

	for (row = 0; row < size; row++)
	{
		for (spaces = size - row - 1; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (window = 0; window <= row; window++)
		{
			_putchar('#');
		}
		if (row != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
