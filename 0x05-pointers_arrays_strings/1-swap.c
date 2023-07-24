#include <stdio.h>

/**
* swap_int - swaps the values of two intergers
* @a: pointer to an int var
* @b: pointer to an int var
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
