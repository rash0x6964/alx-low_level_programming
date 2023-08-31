#include "main.h"

/**
 * digit_count - count digits in binary base
 * @n: the number in base 10
 * Return: unsinged int
 */

unsigned int digit_count(unsigned long int n)
{
	unsigned int count = 1;

	while (n >> 1)
	{
		n >>= 1;
		count++;
	}

	return (count);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned char bit;
	unsigned int i = digit_count(n);

	while (i--)
	{
		bit = (n >> i & 1) + '0';
		_putchar(bit);
	}
}
