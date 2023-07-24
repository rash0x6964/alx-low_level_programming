#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @str: string param
 * Return: int
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}
