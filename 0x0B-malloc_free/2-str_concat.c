#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int len, len_1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = len_1 = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[len_1] != '\0')
		len_1++;
	res = malloc(sizeof(char) * (len + len_1 + 1));
	if (res == NULL)
		return (NULL);

	len = len_1 = 0;
	while (s1[len] != '\0')
	{
		res[len] = s1[len];
		len++;
	}

	while (s2[len_1] != '\0')
	{
		res[len] = s2[len_1];
		len++, len_1++;
	}
	res[len] = '\0';
	return (res);
}
