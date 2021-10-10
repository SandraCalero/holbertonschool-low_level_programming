#include "hash_tables.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be duplicated.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. key can not be an empty string
 * @value: The value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) <= 0 || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = add_node(&ht->array[index], key, value);
	if (new_node == NULL)
		return (0);
	return (1);
}
