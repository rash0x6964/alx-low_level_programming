#include "main.h"

/**
 * _islower - checks for lowerscases character
 * @c: fun param
 * Return: 0 if uppercase, 1 if lowwercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
