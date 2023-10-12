#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: the first node
 * @index: index of the node, starting form 0
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
