#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	int k = 0;

	while (s[k] && accept[j])
	{
		j = 0;
		while (accept[j])
		{
			if (s[k] == accept[j])
			{
				i++;
				break;
			}
			j++;
		}
		k++;
	}
	return (i);
}

