#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return : nothing
 */

void print_alphabet_x10(void) {
	for(int i = 0; i < 10; ++i) {
		for(char i = 'a'; i <= 'z' ; ++i) {
			_putchar(i);
		}
		_putchar('\n');
	}
}
