#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator -  Executes a function given as a parameter
* @array: int
* @size: size_t
* @action: pointer to print
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
