#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of an array
 * @size: number of bytes of each element
 * Return: NULL if nmemb or size 0 or if it fails. success a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb ; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
