#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: Pointer that points to an element of the list
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t numNodes;

	for (numNodes = 0 ; h != NULL ; numNodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (numNodes);
}
