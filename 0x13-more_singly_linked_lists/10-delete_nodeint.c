#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the head of the list
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_list = *head;
	listint_t *prev_node;
	unsigned int _index = 0;

	if (!head)
		return (-1);
	if (tmp_list && index == 0)
	{
		*head = tmp_list->next;
		free(tmp_list);
		return (1);
	}
	while (tmp_list && tmp_list->next)
	{
		if (_index == index)
		{
			prev_node->next = tmp_list->next;
			free(tmp_list);
			return (1);
		}
		_index++;
		prev_node = tmp_list;
		tmp_list = tmp_list->next;
	}
	if (_index + 1 == index)
	{
		free(prev_node->next);
		prev_node->next = NULL;
		return (1);
	}

	return (-1);
}
