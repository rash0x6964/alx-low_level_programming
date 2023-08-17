#include "variadic_functions.h"
#include <stdio.h>

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
		if (i > 0 && (format[i] == 'c' || format[i] == 'i'
			     || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
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
				if ((s && printf("%s", s)) || printf("(nil)"))
				{}
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
