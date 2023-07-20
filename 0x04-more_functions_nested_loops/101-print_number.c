#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: fun param
 * Return: Always 0
 */

void print_number(int n)
{
	int i, digit, power;
	unsigned int temp, numchar, number;

	digit = 1;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}

	i = 1;
	power = 1;
	while (i < digit)
	{
		power = power * 10;
		i++;
	}

	while (power >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
