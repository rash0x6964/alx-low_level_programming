#include "main.h"

/**
 *leet - encodes a string into 1337
 *@s: pointer to string
 *Return: char pointer
 */

char *leet(char *s)
{
	int j, i;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (letters[i] == s[j])
				s[j] = numbers[i];
			i++;
		}
		j++;
	}
	return (s);
}
