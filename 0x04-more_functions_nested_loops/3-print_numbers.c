#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 * Description: Prints the numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
}
