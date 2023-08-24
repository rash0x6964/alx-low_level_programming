#include "lists.h"


/**
 * _strlen - get the length of the string
 * @str: string
 * Return: size of string
 */

size_t _strlen(const char *str)
{
	size_t i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: the value of new node->str
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp_head;
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = _strlen(str);

	if (!*head)
	{
		*head = new;
		return (new);
	}

	tmp_head = *head;
	while (tmp_head->next)
		tmp_head = tmp_head->next;
	tmp_head->next = new;

	return (new);
}
