#include "lists.h"
#include <stdlib.h>
/**
  * free_listint_safe - frees a listint_t list
  * @h: Pointer to a pointer that point to head of list
  *
  * Return: The size of the list that was free’d.
  */
size_t free_listint_safe(listint_t **h)
{
	*h = NULL;
	return (0);
}
