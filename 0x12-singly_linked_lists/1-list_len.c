#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: first node
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
