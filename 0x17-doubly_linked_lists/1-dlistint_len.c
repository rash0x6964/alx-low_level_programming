#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: the first node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int index = 0;

	while (h)
	{
		h = h->next;
		index++;
	}
	return (index);
}
