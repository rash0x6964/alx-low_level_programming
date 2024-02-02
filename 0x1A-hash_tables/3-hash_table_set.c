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
		node = create_new_node(key, value);
		if (!node)
			return (0);
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			node = create_new_node(key, value);
			if (!node)
				return (0);
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}

	return (1);
}
