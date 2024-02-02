#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = calloc(sizeof(hash_table_t), size);
	table->size = size;
	table->array = NULL;
	return (table);
}
