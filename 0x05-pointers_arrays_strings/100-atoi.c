#include "main.h"

/**
  * _atoi -  convert a string to an integer
  * @s: string to be converted
  * Return: converted string as an int
  */

int _atoi(char *s)
{
	int		i;
	int		sign;
	int		value;

	value = 0;
	sign = 0;
	i = 0;
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
		(*i)++;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i++] == '-')
			sign++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		value = value * 10;
		value += s[i] - '0';
		i++;
	}
	sign = 1 - 2 * (sign % 2);
	return (value * sign);
}
