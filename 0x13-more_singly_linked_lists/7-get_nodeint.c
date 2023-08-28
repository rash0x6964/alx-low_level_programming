#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node at list
 * @index: the index of the node, starting at 0
 * Return: node, if not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int _index = 0;

	while (head)
	{
		if (_index == index)
			return (head);
		_index++;
		head = head->next;
	}
	return (NULL);
}
