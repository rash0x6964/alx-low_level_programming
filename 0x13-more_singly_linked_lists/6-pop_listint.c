#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the header of the node
 * Return: head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
