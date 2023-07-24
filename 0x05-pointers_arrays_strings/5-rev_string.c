#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a string
  * @s: fun param
  * Return: void
  */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		i++;
	}
	i--;

	while (j < i)
	{
		char tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
