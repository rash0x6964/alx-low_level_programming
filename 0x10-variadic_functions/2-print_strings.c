#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: other args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator)
			printf("%s", separator);
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
