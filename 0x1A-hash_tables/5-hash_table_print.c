#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	int firstTime = 1;
	hash_node_t *tmp;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (!firstTime)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				if (firstTime)
					firstTime = 0;
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");

}
