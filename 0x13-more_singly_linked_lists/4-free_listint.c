#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: first node of the list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
