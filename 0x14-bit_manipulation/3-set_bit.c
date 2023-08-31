#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the given number
 * @index: the index of the bit u wanna change
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 <= index)
		return (-1);
	*n |= (1 << index);
	return (1);
}
