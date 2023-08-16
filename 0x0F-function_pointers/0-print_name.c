#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer the funciton
 * Return: Nothing.
 **/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
