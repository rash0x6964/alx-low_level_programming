#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * @h: the first node
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t index = 0;

	while (h)
	{
		printf("%d\n", h->n);
		index++;
		h = h->next;
	}
	return (index);
}
