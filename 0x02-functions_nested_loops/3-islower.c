#include "main.h"

/**
 * _islower - checks for lowerscases character
 * Return : int
 * 0 if uppercase
 * 1 if lowwercase
 */

int _islower(int c) {
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
