#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new_node node in a dlistint_t
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new_node node.
 * @n: value for the new_node node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new_node node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
			return (NULL);
	}

	if (!tmp->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
