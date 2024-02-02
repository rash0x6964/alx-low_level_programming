#include "hash_tables.h"

/**
 * create_new_node - allocate a new node
 * @key: is the key
 * @value: is the value associated with the key
 * Return: new node or 0
*/
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;
	return (node);
}

/**
 * hash_table_collision - handel collision
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * @index: index generated using djb algo
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_collision(hash_table_t *ht, const char *key, const char *value,
	unsigned long index)
{
	hash_node_t *tmp;
	hash_node_t *node;

	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_new_node(strdup(key), strdup(value));
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long index;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = create_new_node(strdup(key), strdup(value));
		if (!node)
			return (0);
		ht->array[index] = node;
	}
	else
	{
		if (hash_table_collision(ht, key, value, index) == 0)
			return (0);
	}

	return (1);
}
