#include "main.h"

/**
 *reverse_array - revereses an array of integers
 *@a: pointer to array
 *@n: number of elements of the array
 *Return: void.
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
