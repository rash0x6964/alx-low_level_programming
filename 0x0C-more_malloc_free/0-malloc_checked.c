#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - Allocates memory using malloc
  * @b: unsigned int
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	char *res;

	res = malloc(b);
	if (!res)
		exit(98);
	return (res);
}
