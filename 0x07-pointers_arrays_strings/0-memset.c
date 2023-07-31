#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: buffer
 *@b: char
 *@n: number of byte
 *Return: buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

