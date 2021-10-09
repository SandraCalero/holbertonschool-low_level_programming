#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 *
 * Return: Pointer to the newly created hash table or NULL If something went
 * wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	new_hash_table->size = size;
	new_hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table->array);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hash_table);
}
