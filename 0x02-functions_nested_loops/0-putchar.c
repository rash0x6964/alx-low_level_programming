#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char buffer[9] = "_putchar";
	int i = 0;

	buffer[8] = '\0';
	while(buffer[i] != '\0') {
		_putchar(buffer[i++]);
	}
	_putchar('\n');

	return (0);
}
