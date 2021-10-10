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
	hash_node_t *current, *aux;

	if (ht == NULL)
		return;
	for (i = 0 ; i < ht->size ; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			aux = current;
			current = current->next;
			free(aux->value);
			free(aux->key);
			free(aux);
		}

	}
	free(ht->array);
	free(ht);
}
