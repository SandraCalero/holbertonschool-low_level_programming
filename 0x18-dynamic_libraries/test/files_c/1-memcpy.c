#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: a pointer destiny of src
 * @src: a pointer a string
 * @n: first n bytes from memory area of src
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
