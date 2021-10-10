#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: he hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next_node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			next_node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
