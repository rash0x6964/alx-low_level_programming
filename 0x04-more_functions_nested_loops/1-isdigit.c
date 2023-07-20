#include "main.h"

/**
 * _isdigit - checks for a digit
 * Description: checks for a digit (0 through 9)
 * @c: param
 * Return: 1 if it's a number otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
