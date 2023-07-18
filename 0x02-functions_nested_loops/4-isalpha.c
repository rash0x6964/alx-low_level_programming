#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: fun param
 * Return: 1 if c is a letter lowercase or uppercase, 0 if it's not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
