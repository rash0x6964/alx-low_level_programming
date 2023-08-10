#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers
  * @min: int
  * @max: int
  * Return: int
  */

int *array_range(int min, int max)
{
	int *array0;
	int i;

	if (min > max)
		return (NULL);
	array0 = malloc(sizeof(*array0) * ((max - min) + 1));
	if (array0 == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		array0[i] = min;
	return (array0);
}
