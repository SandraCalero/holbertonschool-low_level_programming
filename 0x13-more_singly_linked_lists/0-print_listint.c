#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer that points to an element of the list
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numNodes;

	for (numNodes = 0 ; h != NULL ; numNodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (numNodes);
}
