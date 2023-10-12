#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 * @head: the head of the dlistint_t.
 * @index: The index of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		tmp = tmp->next;
		index--;
		if (!tmp)
			return (-1);
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
