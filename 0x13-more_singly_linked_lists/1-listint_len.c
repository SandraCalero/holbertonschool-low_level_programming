#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: Pointer that points to an element of the list
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t numNodes;

	for (numNodes = 0 ; h != NULL ; numNodes++)
	{
		h = h->next;
	}
	return (numNodes);
}
