#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: string
 *@src: string
 *@n: len
 *
 *Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}