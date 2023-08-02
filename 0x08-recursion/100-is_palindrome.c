#include "main.h"

int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen_recursion - returns the length of a string.
 * @s: char
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: char
 * @len: int
 * @index: int
 * Return: return 1 if palindrome 0 if not
 */
int check_palindrome(char *s, int len, int index)
{
	if (index == len / 2)
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: return 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
