#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: he hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *next_node;

	for (i = 0; i < (int)ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next_node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
