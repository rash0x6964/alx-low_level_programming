#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_list = *head;
	listint_t *new;
	listint_t *prev_node;
	unsigned int index = 0;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = tmp_list;
		*head = new;
		return (new);
	}

	while (tmp_list)
	{
		if (index == idx)
		{
			prev_node->next = new;
			new->next = tmp_list;
			return (new);
		}
		index++;
		prev_node = tmp_list;
		tmp_list = tmp_list->next;
	}

	free(new);
	return (NULL);
}
