#include "main.h"

/**
 * print_number - prints an integer
 * @n: fun param
 * Retrun: void
 */

void print_number(int n)
{
	int count = 0, power = 1;
	unsigned int n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	while (count > 1)
	{
		power *= 10;
		count--;
	}
	while (power >= 1)
	{
		_putchar(n2 / power % 10 + '0');
		power /= 10;
	}
}
