#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @nb: function param
 * Return: value of last digit
 */

int print_last_digit(int nb)
{
	int result = nb % 10;

	if (nb < 0)
	{
		result = result * -1;
	}

	_putchar(result + '0');

	return (result);
}
