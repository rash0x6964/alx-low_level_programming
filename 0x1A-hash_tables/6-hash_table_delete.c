#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *tmp;
	hash_node_t *head;

	while (ht->size > i)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			head = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = head;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
