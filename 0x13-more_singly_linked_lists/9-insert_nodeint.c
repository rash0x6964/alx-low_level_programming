#include "lists.h"

/**
 * create_node - cearte node and fill it
 * @n: value of node
 * Return: the new node
 */

listint_t *create_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

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
	new = create_node(n);
	if (!new)
		return (NULL);
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
	if (index == idx)
	{
		prev_node->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
