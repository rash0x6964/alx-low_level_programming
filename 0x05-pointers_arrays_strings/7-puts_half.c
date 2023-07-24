#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line
  * @str: fun param
  * Return: void
  */
void puts_half(char *str)
{
	int l = 0;
	int k;

	while (str[l] != '\0')
		l++;

	if (l % 2 != 0)
		k = (l / 2) + 1;
	else
		k = l / 2;

	for (; k < l; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
