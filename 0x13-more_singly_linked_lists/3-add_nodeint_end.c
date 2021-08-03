#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 * @n: Integer as a data in a node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	/* 1. allocate memory for new_node*/
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	/* 1.1 validate that new_node is not empty*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* 2. dereferencing data*/
	new_node->n = n;
	/*
	 * 3. as the new node in the last node,
	 * the next in this node has to point to null
	 */
	new_node->next = NULL;
	/*
	 * 4. validate that the linked list is empty,
	 * then make new_node as a head
	 */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* 5. if not, go through the list until the last node*/
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* 6. change the next of the last node to point to the new_node*/
	last_node->next = new_node;
	return (new_node);
}
