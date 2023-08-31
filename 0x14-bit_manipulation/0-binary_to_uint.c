#include "main.h"

/**
 * is_binary_str - verify if it's a binary string
 * @str: string
 * Return: true or false
 */

bool is_binary_str(const char *str)
{
	int i = 0;

	while (str && str[i])
	{
		if (str[i] != '0' && str[i] != '1')
			return (false);
		i++;
	}
	return (true);
}

/**
 * _pow - power of the given number
 * @n: base value
 * @p: power value
 * Return: number
 */

unsigned long _pow(unsigned long n, unsigned long p)
{
	if (p == 0)
		return (1);
	return (_pow(n, p - 1) * n);
}


/**
 * binary_to_uint -  converts a binary number to an unsigned int .
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0, j = 0;
	unsigned int sum = 0;

	if (!b || !is_binary_str(b))
		return (0);

	while (b[len])
		len++;

	j = len - 1;
	while (i < len)
	{
		sum += (b[j] - '0') * _pow(2, i);
		i++;
		j--;
	}

	return (sum);
}
