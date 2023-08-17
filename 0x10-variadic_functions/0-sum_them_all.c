#include "variadic_functions.h"

/**
 * sum_them_all - calc the sum of all it's params
 * @n: number of params
 * @...: other params
 * Return: sum of all the args (int)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (!n)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
