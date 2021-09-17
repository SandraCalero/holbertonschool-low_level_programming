#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: Pointer to the head to a double linked list
* @n: Integer as a data for the new node
*
* Return: The address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->prev = current;
		new_node->next = NULL;
		current->next = new_node;
		current = NULL;
	}
	return (new_node);
}
