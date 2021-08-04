#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 * @head: Pointer that points to an element of the list
 *
 * Return: The number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes;

	if (head == NULL)
	{
		exit(98);
	}
	numNodes = 0;
	return (numNodes);
}
