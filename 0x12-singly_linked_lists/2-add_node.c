#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 * @str: Pointer to a string that must be duplicaded.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (len = 0 ; str[len] != '\0' ; len++)
		;
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
