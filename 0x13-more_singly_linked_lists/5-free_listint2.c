#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the header of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
