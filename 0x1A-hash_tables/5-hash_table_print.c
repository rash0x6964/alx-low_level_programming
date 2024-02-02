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

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!firstTime)
				printf(", ");
			printf("%s: %s", ht->array[i]->key, ht->array[i]->value);
			if (firstTime)
				firstTime = 0;
		}
		i++;
	}
	printf("}\n");

}
