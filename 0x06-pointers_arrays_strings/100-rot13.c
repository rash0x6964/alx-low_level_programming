#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string conversion
 */

char *rot13(char *s)
{
	int j, i = 0;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (letters[j] == s[i])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
