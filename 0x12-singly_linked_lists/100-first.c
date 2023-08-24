#include "lists.h"

/**
 * first - prints ... before the main function is executed.
 * Return: nothing
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
