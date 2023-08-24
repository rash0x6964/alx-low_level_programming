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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of list
 * @str: the value of new node->str
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
