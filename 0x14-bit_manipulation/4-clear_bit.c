#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the given number
 * @index: index of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	*n &= ~(1LU << index);
	return (1);
}
