#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: number of bytes that has to be allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: a pointer to the allocated memory if malloc fails 98
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr;

	if (ptr == NULL)
		return (NULL);
}
