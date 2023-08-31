#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number
 * @m: target number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int tmp = n ^ m;

	while (tmp)
	{
		count += tmp & 1;
		tmp >>= 1;
	}
	return (count);
}
