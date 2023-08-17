#include "variadic_functions.h"
#include <stdio.h>

/**
 * is_specifier - check if it's specifier
 * @c: char
 * Return: true or false
 */

int is_specifier(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
 * print_all -  prints anything, followed by a new line.
 * @format: list of types of arguments passed to the function
 * @...: other args
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		(void) (i > 0 && is_specifier(c) && printf(", "));
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);
				(void) ((s && printf("%s", s)) || printf("(nil)"));
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
