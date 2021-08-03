#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer that points to an element of a list.
 * @n: Integer as a data in a node
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*1. allocate memory for new node*/
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	/*1.1 validate that new_node is not empty*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*2. dereferencing data*/
	new_node->n = n;
	/*3. make next of new node as head */
	new_node->next = *head;
	/*4. move the head to point to the new node*/
	*head = new_node;
	return (new_node);
}
