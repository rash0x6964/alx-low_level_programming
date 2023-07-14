#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (Success)
 */

int main() {
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
