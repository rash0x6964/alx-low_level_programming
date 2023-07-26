#include "main.h"

/**
 *_strcmp - Compares two strings
 *@s1: pointer to a char
 *@s2: pointer to a char
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' &&  *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
